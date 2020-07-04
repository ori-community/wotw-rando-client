#include <interception_macros.h>
#include <dll_main.h>

INTERCEPT(10061888, app::GameController_GameModeBalanceSettings*, GameController__get_CurrentGameModeBalanceSettings, (app::GameController* this_ptr)) {
    auto result = GameController__get_CurrentGameModeBalanceSettings(this_ptr);
    result->fields.ExperienceOrbCostMultiplier = this_ptr->fields.NormalModeBalanceSettings->fields.ExperienceOrbCostMultiplier;
    return result;
}
