#include "userConfirm.h"
#include <iostream>

void userConfirm(int pick)
{
    while (!WindowShouldClose())
    {

        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        std::cout << pick;

        EndDrawing();
    }
}