#include <Core/api/uber_states/uber_state.h>
#include <Core/enums/uber_state.h>
#include <Core/property/reactivity.h>
#include <Modloader/app/methods/EntityPlaceholder.h>
#include <Modloader/app/methods/UnityEngine/Object.h>
#include <Modloader/interception_macros.h>

namespace {
    using namespace app::classes;

    struct EntityPlaceholderDefaults {
        il2cpp::WeakGCRef<app::EntityPlaceholder> placeholder_ref;
        bool respawn_on_screen;
        float min_distance_from_player;
        std::shared_ptr<const core::reactivity::ReactiveEffect> effect = nullptr;

        EntityPlaceholderDefaults(const il2cpp::WeakGCRef<app::EntityPlaceholder>& placeholder_ref, bool respawn_on_screen, float min_distance_from_player);
    };

    core::api::uber_states::UberState allow_spawning_enemies_nearby(UberStateGroup::RandoConfig, 103);
    std::unordered_map<int, EntityPlaceholderDefaults> active_entity_placeholders;

    void apply_entity_placeholder_settings(const int id, const EntityPlaceholderDefaults& defaults) {
        if (!defaults.placeholder_ref.is_valid()) {
            active_entity_placeholders.erase(id);
            return;
        }

        const auto placeholder = *defaults.placeholder_ref;

        if (allow_spawning_enemies_nearby.get<bool>()) {
            placeholder->fields.RespawnOnScreen = true;
            placeholder->fields.MinDistanceFromPlayer = 0.f;
        } else {
            placeholder->fields.RespawnOnScreen = defaults.respawn_on_screen;
            placeholder->fields.MinDistanceFromPlayer = defaults.min_distance_from_player;
        }
    }

    EntityPlaceholderDefaults::EntityPlaceholderDefaults(
        const il2cpp::WeakGCRef<app::EntityPlaceholder>& placeholder_ref,
        bool respawn_on_screen,
        float min_distance_from_player
    ) :
        placeholder_ref(placeholder_ref),
        respawn_on_screen(respawn_on_screen),
        min_distance_from_player(min_distance_from_player) {}

    IL2CPP_INTERCEPT(void, EntityPlaceholder, Awake, app::EntityPlaceholder* this_ptr) {
        next::EntityPlaceholder::Awake(this_ptr);

        auto& [id, defaults] = *active_entity_placeholders
                                    .emplace(
                                        UnityEngine::Object::GetInstanceID(reinterpret_cast<app::Object_1*>(this_ptr)),
                                        EntityPlaceholderDefaults{
                                            il2cpp::WeakGCRef(this_ptr),
                                            this_ptr->fields.RespawnOnScreen,
                                            this_ptr->fields.MinDistanceFromPlayer,
                                        }
                                    )
                                    .first;

        defaults.effect = core::reactivity::watch_effect()
                              .effect({allow_spawning_enemies_nearby})
                              .after([&] { apply_entity_placeholder_settings(id, defaults); })
                              .finalize();
    }

    IL2CPP_INTERCEPT(void, EntityPlaceholder, OnDestroy, app::EntityPlaceholder* this_ptr) {
        active_entity_placeholders.erase(UnityEngine::Object::GetInstanceID(reinterpret_cast<app::Object_1*>(this_ptr)));
        next::EntityPlaceholder::OnDestroy(this_ptr);
    }
} // namespace
