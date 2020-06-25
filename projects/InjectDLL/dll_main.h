#pragma once

#include <constants.h>
#include <macros.h>

void on_fixed_update(__int64 thisPointer);
std::string pretty_time();
bool is_in_shop_screen();
Game_Characters_StaticFields* get_characters();
GameController_c* get_game_controller();
Game_UI_c* get_UI();
SeinCharacter_o* get_sein();

INJECT_C_DLLEXPORT bool has_ability(uint8_t ability);

void trace(MessageType type, int level, std::string const& group, std::string const& message);
