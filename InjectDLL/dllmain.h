#pragma once
#include "PEModule.h"

void onFixedUpdate(__int64 thisPointer);
static std::string pretty_time();
bool isInShopScreen();
extern InjectDLL::PEModule* CSharpLib;
void log(std::string message);
void error(std::string message);
void debug(std::string message);
Game_Characters_StaticFields* get_characters();
SeinCharacter_o* get_sein();