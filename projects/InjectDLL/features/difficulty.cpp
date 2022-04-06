#include <game/player.h>

#include <Il2CppModLoader/interception_macros.h>

IL2CPP_INTERCEPT(, GameController, app::GameController_GameModeBalanceSettings*, get_CurrentGameModeBalanceSettings, (app::GameController* this_ptr)) {
    auto result = GameController::get_CurrentGameModeBalanceSettings(this_ptr);
    result->fields.ExperienceOrbCostMultiplier = this_ptr->fields.NormalModeBalanceSettings->fields.ExperienceOrbCostMultiplier;
    return result;
}

IL2CPP_INTERCEPT(, SeinDamageReciever, void, OnRecieveDamage, (app::SeinDamageReciever* this_ptr, app::Damage* damage)) {
    auto interaction = game::player::sein()->fields.Abilities->fields.InteractionWrapper->fields.State;
    if (!interaction->fields.m_isInNPCInteraction)
        SeinDamageReciever::OnRecieveDamage(this_ptr, damage);
    else
        damage->fields.m_ignored = true;
}
