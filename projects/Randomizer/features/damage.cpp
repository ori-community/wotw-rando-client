#include <Modloader/interception_macros.h>
#include <Modloader/app/methods/UnityEngine/Object.h>
#include <Modloader/app/methods/Moon/DamageReceiver.h>
#include <Modloader/app/methods/PetrifiedOwlBossEntity.h>
#include <Modloader/app/methods/Moon/Entity.h>
#include <Modloader/app/methods/Damage.h>
#include <Modloader/app/types/Damage.h>
#include <Modloader/app/types/Entity.h>
#include <Randomizer/features/damage.h>

#include "Modloader/modloader.h"

namespace randomizer::damage {
    using namespace app::classes;

    bool force_deal_damage = false;

    namespace {
        IL2CPP_INTERCEPT(void, PetrifiedOwlBossEntity, ResolveDamage, app::PetrifiedOwlBossEntity* this_ptr, app::DamageResult* damage_result) {
            if (force_deal_damage) {
                Moon::Entity::ResolveDamage(reinterpret_cast<app::Entity*>(this_ptr), damage_result);
                return;
            }

            next::PetrifiedOwlBossEntity::ResolveDamage(this_ptr, damage_result);
        }

        IL2CPP_INTERCEPT(bool, Moon::DamageReceiver, get_Active, app::DamageReceiver* this_ptr) {
            if (force_deal_damage) {
                return true;
            }

            return next::Moon::DamageReceiver::get_Active(this_ptr);
        }
    } // namespace

    void damage_all_enemies(float amount, bool force) {
        modloader::ScopedSetter _(force_deal_damage, force);

        auto all_damage_receivers = UnityEngine::Object::FindObjectsOfType_6(*UnityEngine::Object::FindObjectsOfType_6_MethodInfo);
        for (auto& found_damage_receiver: il2cpp::ArrayIterator(all_damage_receivers)) {
            if (Moon::DamageReceiver::get_Active(found_damage_receiver)) {
                const auto entity = il2cpp::unity::get_component<app::Entity>(
                    il2cpp::unity::get_game_object(found_damage_receiver),
                    types::Entity::get_class()
                );

                const auto path = il2cpp::unity::get_path(found_damage_receiver);

                if (!il2cpp::unity::get_active_in_hierarchy(entity)) {
                    continue;
                }

                if (entity->fields.m_vitals->fields.DamageReceivers->max_length > 0) {
                    const auto position = Moon::Entity::get_NavigationAgentPosition(entity);
                    const auto damage = types::Damage::create();

                    Damage::ctor(
                        damage,
                        amount,
                        app::Vector2{0, 0},
                        position,
                        app::DamageType__Enum::DebugDamage,
                        app::AbilityType__Enum::None,
                        nullptr,
                        -1,
                        nullptr,
                        app::SpiritShardType__Enum::None,
                        false,
                        app::DamageWeight__Enum::Medium,
                        0.0,
                        true
                    );

                    Moon::DamageReceiver::OnRecieveDamage(entity->fields.m_vitals->fields.DamageReceivers->vector[0], damage);
                }
            }
        }
    }
} // namespace randomizer::damage
