#pragma once

#include <constants.h>
#include <macros.h>
#include <interception_macros.h>

void on_fixed_update(__int64 thisPointer);
std::string pretty_time();
bool is_in_shop_screen();

STATIC_CLASS_EXTERN(Game_Characters_c*, g_characters);
STATIC_CLASS_EXTERN(GameController_c*, g_game_controller);
STATIC_CLASS_EXTERN(Game_UI_c*, g_ui);
SeinCharacter_o* get_sein();

INJECT_C_DLLEXPORT bool has_ability(uint8_t ability);

void trace(MessageType type, int level, std::string const& group, std::string const& message);
