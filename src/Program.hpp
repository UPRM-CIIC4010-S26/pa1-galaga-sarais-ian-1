#pragma once

#include <iostream>
#include <string>
#include "raylib-cpp/raylib-cpp.hpp"
#include "Background.hpp"
#include "Player.hpp"
#include "StdEnemy.hpp"
#include "SpEnemy.hpp"
#include "StEnemy.hpp"
#include "DyEnemy.hpp"
class Program {
    private:
        Background background = Background();
        Player* player = new Player((GetScreenWidth() / 2) - 15, GetScreenHeight() * 0.75f);
        int respawnCooldown = 1080;
        int respawns = 0;
        int count = 0;
        int delay = 0;
        int pauseFrames = 0;
        int lives = 3;
        int score = 0; // add variable de score//
        int next_life_score = 1000; // add lives //
       

        bool startup = true;
        bool paused = false;
        bool gameOver = false;

    public:
        Program();
        
        void Update();
        void Draw();
        void ManageEnemyRespawns();
        void DrawStartup();
        void DrawPauseScreen();
        void DrawGameOver();
        void KeyInputs();
        void PlayerReset();
        void Reset();
        int getScore() const {return score;}
        int getNextLifeScore() const {return next_life_score;}
        int getlives() const {return lives;}
                  
        ~Program() {}
};