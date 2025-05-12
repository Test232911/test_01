#include "raylib.h"
#include "raymath.h"

int main(){
    //window dimension
    int windowWidth{800};
    int windowHeight{400};
    InitWindow(windowWidth,windowHeight,"Ball Game");

    // fps
    SetTargetFPS(60);

    //movement
    int movement{10};

    //circle parameters
    int radius{50};
    int circle_x{windowWidth/2};
    int circle_y{windowHeight/2};

    //Rectangle 

    //while loop 
    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(WHITE);

        float dT{GetFrameTime()};


        DrawCircle(circle_x ,circle_y , radius , RED);

        if(IsKeyDown(KEY_W)){
            circle_y-=movement;
        }

        if(IsKeyDown(KEY_S)){
            circle_y+=movement;
        }

        if(IsKeyDown(KEY_A)){
            circle_x-=movement;
        }

        if(IsKeyDown(KEY_D)){
            circle_x+=movement;
        }




        EndDrawing();

    }
}