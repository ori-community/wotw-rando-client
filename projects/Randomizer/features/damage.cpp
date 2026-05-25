#include <Modloader/interception_macros.h>
#include <Modloader/app/methods/UnityEngine/Object.h>
#include <Modloader/app/methods/Moon/DamageReceiver.h>
#include <Modloader/app/methods/PetrifiedOwlBossEntity.h>
#include <Modloader/app/methods/Moon/Entity.h>
#include <Modloader/app/methods/Damage.h>
#include <Modloader/app/methods/UberGCManager.h>
#include <Modloader/app/types/Damage.h>
#include <Modloader/app/types/Entity.h>
#include <Randomizer/features/damage.h>
#include <Modloader/modloader.h>


namespace randomizer::damage {
    using namespace app::classes;

    bool force_deal_damage = false;
    std::unordered_set<int32_t> forced_damage_ids;

    namespace {
        IL2CPP_INTERCEPT_WITH_ORDER(0, void, UberGCManager, RunGC, bool is_debug) {
            next::UberGCManager::RunGC(is_debug);
            forced_damage_ids.clear();
        }

        IL2CPP_INTERCEPT(void, PetrifiedOwlBossEntity, ResolveDamage, app::PetrifiedOwlBossEntity* this_ptr, app::DamageResult* damage_result) {
            if (force_deal_damage || forced_damage_ids.contains(damage_result->Damage->fields.ID)) {
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
        std::unordered_set<app::Entity*> entities;

        for (auto& found_damage_receiver: il2cpp::ArrayIterator(all_damage_receivers)) {
            const auto entity = il2cpp::unity::get_component<app::Entity>(
                il2cpp::unity::get_game_object(found_damage_receiver),
                types::Entity::get_class()
            );

            if (!il2cpp::unity::get_active_in_hierarchy(entity)) {
                continue;
            }

            if (entities.contains(entity)) {
                continue;
            }

            entities.insert(entity);

            for (auto damage_receiver: il2cpp::ArrayIterator(entity->fields.m_vitals->fields.DamageReceivers)) {
                if (!Moon::DamageReceiver::get_Active(damage_receiver)) {
                    continue;
                }

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

                if (force) {
                    forced_damage_ids.insert(damage->fields.ID);
                }

                Moon::DamageReceiver::OnRecieveDamage(entity->fields.m_vitals->fields.DamageReceivers->vector[0], damage);
                break;
            }
        }
    }
} // namespace randomizer::damage
