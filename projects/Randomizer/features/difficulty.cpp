#include <Core/api/game/player.h>

#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/methods/SeinDamageReciever.h>
#include <Modloader/interception_macros.h>

using namespace app::classes;

IL2CPP_INTERCEPT(GameController, app::GameController_GameModeBalanceSettings*, get_CurrentGameModeBalanceSettings, (app::GameController * this_ptr)) {
    auto result = next::GameController::get_CurrentGameModeBalanceSettings(this_ptr);
    result->fields.ExperienceOrbCostMultiplier = this_ptr->fields.NormalModeBalanceSettings->fields.ExperienceOrbCostMultiplier;
    return result;
}

IL2CPP_INTERCEPT(SeinDamageReciever, void, OnRecieveDamage, (app::SeinDamageReciever * this_ptr, app::Damage* damage)) {
    auto interaction = core::api::game::player::sein()->fields.Abilities->fields.InteractionWrapper->fields.State;
    if (!interaction->fields.m_isInNPCInteraction)
        next::SeinDamageReciever::OnRecieveDamage(this_ptr, damage);
    else
        damage->fields.m_ignored = true;
}
