#pragma once

#include <constants.h>
#include <macros.h>
#include <Il2CppModLoader/interception_macros.h>

void on_fixed_update(app::GameController* this_ptr);
std::string pretty_time();
void mute_for(int frames);

app::GameController* get_game_controller();
app::SeinCharacter* get_sein();
app::UI__Class* get_ui();

INJECT_C_DLLEXPORT bool has_ability(app::AbilityType__Enum ability);
INJECT_C_DLLEXPORT void set_ability(app::AbilityType__Enum ability, bool value);
