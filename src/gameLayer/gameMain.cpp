#include <raylib.h>
#include "gameMain.h"
#include <asserts.h>

struct GameData{

    float positionX = 300;
    float positionY = 200;

}gameData;

bool initGame(){

    bool thingsAreOk = false;

    permaAssertComment(thingsAreOk == true, "error; things are not ok :/");


    return true;
}

bool updateGame(){

    float deltaTime = GetFrameTime();
    if (deltaTime > 1.f / 5) { deltaTime = 1 / 5.f; }

    if (IsKeyDown(KEY_A)) { gameData.positionX -= 200 * deltaTime; }
    if (IsKeyDown(KEY_D)) { gameData.positionX += 200 * deltaTime; }
    if (IsKeyDown(KEY_W)) { gameData.positionY -= 200 * deltaTime; }
    if (IsKeyDown(KEY_S)) { gameData.positionY += 200 * deltaTime; }

    DrawRectangle( gameData.positionX, gameData.positionY, 50, 50, {255, 0, 200, 255});

    return true;
}

void closeGame(){

}
