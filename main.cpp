
#include "raylib.h"

int main() {
    const int width = 800;
    const int height = 800;

    InitWindow(width, height, "Chess - Raylib");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("Chess Game", 300, 350, 40, DARKGRAY);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
