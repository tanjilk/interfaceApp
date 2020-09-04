// A importar necessários pacotes
#include <iostream>
#include <SDL2/SDL.h>
#include <stdio.h>

using namespace std;

// Configurar a resolução da janela
const int SCREEN_WIDHT = 300;
const int SCREEN_HEIGHT = 300;

int main(int argc, char *args[]){

    SDL_Window *window = NULL;
    SDL_Surface *screenSurface = NULL;

    if(SDL_Init(SDL_INIT_VIDEO) < 0){
        std::cout << "SDL2: Não consegui iniciar o modulo...\nErro: " << SDL_GetError() << std::endl;
    } else {
        // Criar uma janela
        window = SDL_CreateWindow("Uma Janela do SDL", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDHT, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        if(window == NULL){
            // Se não conseguir criar a janela, irá informar um erro
            std::cout << "SDL2: Não consegui criar a janela...\nErro: " << SDL_GetError() << std::endl;
        } else {
            screenSurface = SDL_GetWindowSurface(window);
            // Preenche a janela em cor roxa ou whatever
            SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xC0,0x00,0xFF));
            // Ira atualizar a janela que cada vez é desenhado
            SDL_UpdateWindowSurface(window);
            // Irá haver um delay para fechar a janela
            SDL_Delay(10000);

        }

        /*
        Predefined colours:

#define TRANSPARENT     argb(0xFF,0xFF,0xFF,0xFF)

#define BLACK           rgb(0x00,0x00,0x00)
#define WHITE           rgb(0xFF,0xFF,0xFF)
#define BLUE            rgb(0x00,0x00,0xFF)
#define YELLOW          rgb(0xFF,0xFF,0x00)
#define GREEN           rgb(0x00,0xFF,0x00)
#define MAGENTA         rgb(0xFF,0x00,0xFF)
#define RED             rgb(0xFF,0x00,0x00)
#define CYAN            rgb(0x00,0xFF,0xFF)

#define GREY            rgb(0x80,0x80,0x80)
#define GRAY            rgb(0x80,0x80,0x80)
#define LIGHT_GREY      rgb(0xC0,0xC0,0xC0)
#define LIGHT_GRAY      rgb(0xC0,0xC0,0xC0)
#define PALE_GREY       rgb(0xE0,0xE0,0xE0)
#define PALE_GRAY       rgb(0xE0,0xE0,0xE0)
#define DARK_GREY       rgb(0x40,0x40,0x40)
#define DARK_GRAY       rgb(0x40,0x40,0x40)

#define DARK_BLUE       rgb(0x00,0x00,0x80)
#define DARK_GREEN      rgb(0x00,0x80,0x00)
#define DARK_RED        rgb(0x80,0x00,0x00)
#define LIGHT_BLUE      rgb(0x80,0xC0,0xFF)
#define LIGHT_GREEN     rgb(0x80,0xFF,0x80)
#define LIGHT_RED       rgb(0xFF,0xC0,0xFF)
#define PINK            rgb(0xFF,0xAF,0xAF)
#define BROWN           rgb(0x60,0x30,0x00)
#define ORANGE          rgb(0xFF,0x80,0x00)
#define PURPLE          rgb(0xC0,0x00,0xFF)
#define LIME            rgb(0x80,0xFF,0x00)
*/

    // Desloca a memória
    SDL_DestroyWindow(window);

    // Desloca a memória janela
    SDL_Quit();
    return 0;

    }
}
