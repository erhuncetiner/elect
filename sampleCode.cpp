#include <SDL2/SDL.h>
#include <iostream>
//export CFLAGS='-gdwarf-2 -gstrict-dwarf'


using namespace std;

class MainComponent
{
 public:
    void init();
    ~MainComponent();

 private:
    SDL_Window *window;
    SDL_Renderer* renderer;
};

MainComponent::~MainComponent()
{
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
}

void MainComponent::init() {
    //Initialize SDL
    SDL_Init(SDL_INIT_EVERYTHING);

    int screenWidth = 400;
    int screenHeight = 300;

    window = SDL_CreateWindow("My Game Window", 100, 100, screenWidth, screenHeight, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, 0);

    cout << screenWidth << " " << screenHeight << endl;

    if(window == nullptr) {
        cout << "Error could not create window" << SDL_GetError() << endl;
    }

    //change the background color
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);

    // Clear the entire screen to our selected color.
    SDL_RenderClear(renderer);

    // Up until now everything was drawn behind the scenes.
    // This will show the new, red contents of the window.
    SDL_RenderPresent(renderer);


    SDL_Delay(5000);

}


int main(int argc, const char * argv[]) {

    MainComponent mainComponent;
    mainComponent.init();

    char myVar;

    cout << "Enter any key to quit...";
    cin >> myVar;

    SDL_Quit();
    return 0;
}
