#pragma once

#include <constants.h>
#include <macros.h>
#include <interception_macros.h>

void on_fixed_update(app::GameController* this_ptr);
std::string pretty_time();
bool is_in_shop_screen();
void mute_for(int frames);

app::GameController* get_game_controller();
app::SeinCharacter* get_sein();
app::UI__Class* get_ui();

INJECT_C_DLLEXPORT bool has_ability(uint8_t ability);

void trace(MessageType type, int level, std::string const& group, std::string const& message);
void info(std::string const& group, std::string const& message);
void warn(std::string const& group, std::string const& message);
void debug(std::string const& group, std::string const& message);