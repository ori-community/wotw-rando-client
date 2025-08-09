#include <Core/api/game/player.h>

#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/methods/SeinDamageReciever.h>
#include <Modloader/interception_macros.h>

using namespace app::classes;

IL2CPP_INTERCEPT(app::GameController_GameModeBalanceSettings*, GameController, get_CurrentGameModeBalanceSettings, app::GameController * this_ptr) {
    auto result = next::GameController::get_CurrentGameModeBalanceSettings(this_ptr);
    result->fields.ExperienceOrbCostMultiplier = this_ptr->fields.NormalModeBalanceSettings->fields.ExperienceOrbCostMultiplier;
    return result;
}

IL2CPP_INTERCEPT(void, SeinDamageReciever, OnRecieveDamage, app::SeinDamageReciever * this_ptr, app::Damage* damage) {
    const auto sein = core::api::game::player::sein();

    if (sein != nullptr && sein->fields.Abilities->fields.InteractionWrapper->fields.State->fields.m_isInNPCInteraction || damage->fields.m_damageType == app::DamageType__Enum::Wind) {
        damage->fields.m_ignored = true;
    } else {
        next::SeinDamageReciever::OnRecieveDamage(this_ptr, damage);
    }
}
