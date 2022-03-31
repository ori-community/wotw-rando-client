#include <features/trackers/death_listener.h>

#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/il2cpp_helpers.h>

#include <csharp_bridge.h>

IL2CPP_INTERCEPT(Moon, EnemyEntity, void, OnDied, (app::EnemyEntity* this_ptr, app::DamageResult* result)) {
    //app::Type* type = this_ptr->fields.m_enemyType; actual class.
    auto* go = il2cpp::unity::get_game_object(this_ptr);
    const auto name = il2cpp::unity::get_object_name(go);
    EnemyEntity::OnDied(this_ptr, result);
    if (csharp_bridge::on_enemy_death != nullptr)
        csharp_bridge::on_enemy_death(name.c_str(), result->Damage->fields.m_damageType);
}

IL2CPP_INTERCEPT(, SeinDamageReciever, void, OnKill, (app::SeinDamageReciever* this_ptr, app::Damage* damage)) {
    //app::Type* type = this_ptr->fields.m_enemyType; actual class.
    auto* go = damage->fields.m_sender;
    const auto name = il2cpp::unity::get_object_name(go);
    SeinDamageReciever::OnKill(this_ptr, damage);
    if (csharp_bridge::on_player_death != nullptr)
        csharp_bridge::on_player_death(name.c_str(), damage->fields.m_damageType);
}
