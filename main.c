#include "raylib.h"

const int screenWidth = 800;
const int screenHeight = 600;
const int playerSize = 50;

int main()
{

    InitWindow(screenWidth, screenHeight, "Raylib basic window");
    SetTargetFPS(100);
    //   Game Loop
    while (!WindowShouldClose())
    {
        BeginDrawing();
        renderMain();
        EndDrawing();
    }
    CloseWindow();
    return 0;
}

void renderMain()
{
    ClearBackground(RAYWHITE);
    DrawText(GetFPS(), 20, 20, 20, BLACK);
    DrawText("Success", 20, 20, 20, BLACK);
    DrawRectangle(GetMouseX() - (playerSize / 2), GetMouseY() - (playerSize / 2), playerSize, playerSize, RED);
    // DrawRay(Ray ray, Color color);
}