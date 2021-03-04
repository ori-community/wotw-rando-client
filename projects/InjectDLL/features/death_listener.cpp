#include <features/death_listener.h>

#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/il2cpp_helpers.h>

#include <csharp_bridge.h>

IL2CPP_INTERCEPT(Moon, EnemyEntity, void, OnDied, (app::EnemyEntity* this_ptr, app::DamageResult* result)) {
    //app::Type* type = this_ptr->fields.m_enemyType; actual class.
    app::GameObject* go = il2cpp::unity::get_game_object(this_ptr);
    std::string name = il2cpp::unity::get_object_name(go);
    EnemyEntity::OnDied(this_ptr, result);
    if (csharp_bridge::on_enemy_death != nullptr)
        csharp_bridge::on_enemy_death(name.c_str(), result->Damage->fields.m_damageType);
}
