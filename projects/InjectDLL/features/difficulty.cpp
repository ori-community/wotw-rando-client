#include <interception_macros.h>
#include <dll_main.h>

IL2CPP_INTERCEPT(, GameController, app::GameController_GameModeBalanceSettings*, get_CurrentGameModeBalanceSettings, (app::GameController* this_ptr)) {
    auto result = GameController::get_CurrentGameModeBalanceSettings(this_ptr);
    result->fields.ExperienceOrbCostMultiplier = this_ptr->fields.NormalModeBalanceSettings->fields.ExperienceOrbCostMultiplier;
    return result;
}
