#include <interception_macros.h>
#include <dll_main.h>

INTERCEPT(10061888, GameController_GameModeBalanceSettings_o*, GameController__get_CurrentGameModeBalanceSettings, (GameController_o* this_ptr)) {
    auto result = GameController__get_CurrentGameModeBalanceSettings(this_ptr);
    result->ExperienceOrbCostMultiplier = this_ptr->NormalModeBalanceSettings->ExperienceOrbCostMultiplier;
    return result;
}
