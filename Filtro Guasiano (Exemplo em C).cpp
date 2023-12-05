#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define KERNEL_SIZE 3

// Função de aplicação do Filtro Gussiano
void applyGaussianFilter(float **image, int width, int height) {
    float kernel[KERNEL_SIZE][KERNEL_SIZE] = {
        {1.0/16, 1.0/8, 1.0/16},
        {1.0/8, 1.0/4, 1.0/8},
        {1.0/16, 1.0/8, 1.0/16}
    };
    
    float **outputImage = (float **)malloc(height * sizeof(float *));
    for (int i = 0; i < height; i++) {
        outputImage[i] = (float *)malloc(width * sizeof(float));
    }
	// Processamento de imagem
    for (int y = 1; y < height - 1; y++) {
        for (int x = 1; x < width - 1; x++) {
            float sum = 0.0;
            for (int ky = 0; ky < KERNEL_SIZE; ky++) {
                for (int kx = 0; kx < KERNEL_SIZE; kx++) {
                    sum += kernel[ky][kx] * image[y - 1 + ky][x - 1 + kx];
                }
            }
            outputImage[y][x] = sum;
        }
    }

    //Liberação de memoria alocada para o ponteiro 'outputImage'.
    for (int i = 0; i < height; i++) {
        free(outputImage[i]);
    }
    free(outputImage);
}

int main() {
    int width = 480;
    int height = 480; 
    //Matrix para receber a imagem baseado na altura e largura da imagem.
    float **image = (float **)malloc(height * sizeof(float *));
    for (int i = 0; i < height; i++) {
        image[i] = (float *)malloc(width * sizeof(float));
    }
    //Chamando a função para aplicar o filtro gaussiano
    
    applyGaussianFilter(image, width, height);
    // 'image' contém a imagem filtrada com o filtro gaussiano.
    
    // for para liberar a imagem alocada na memoria.
    for (int i = 0; i < height; i++) {
        free(image[i]);
    }
    free(image);

    return 0;
}
