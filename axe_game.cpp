#include "raylib.h"

int main() {
  int width = 350;
  InitWindow(width, 200, "A Very Fancy Window");

  while (WindowShouldClose() == false) {
    BeginDrawing();
    ClearBackground(RED);

    DrawCircle(175, 100, 25.0, BLUE);

    EndDrawing();
  }
}
