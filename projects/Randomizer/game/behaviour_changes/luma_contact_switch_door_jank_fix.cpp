#include <fmt/format.h>
#include <iostream>
#include <optional>

#include <Modloader/app/methods/LagoonContactSwitchDoors.h>
#include <Modloader/app/methods/Moon/Timeline/ActivateAnimatorSystem.h>
#include <Modloader/app/methods/System/Collections/Generic/Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>


#include "Modloader/modloader.h"

using namespace app::classes;

/**
 * This patch fixes the underwater contact switch doors becoming active for one frame
 * a short, seemingly random time after suspending the game (Bashing, Pause menu, Debug menu etc.)
 */
namespace {
    struct LagoonContactSwitchDoorRef {
        il2cpp::WeakGCRef<app::LagoonContactSwitchDoors> component;
        il2cpp::WeakGCRef<app::GameObject> physics;

        bool is_valid() {
            return component.is_valid() && physics.is_valid();
        }
    };

    std::vector<LagoonContactSwitchDoorRef> switch_door_refs;  // We save all active LagoonContactSwitchDoors and their physics GameObjects here
    LagoonContactSwitchDoorRef* lagoon_contact_switch_door_ref_just_removed = nullptr;  // This pointer points to the LagoonContactSwitchDoors that is about to be janked
    auto is_in_activate_animator_system_on_update = false;

    IL2CPP_INTERCEPT(LagoonContactSwitchDoors, void, Awake, (app::LagoonContactSwitchDoors* this_ptr)) {
        next::LagoonContactSwitchDoors::Awake(this_ptr);

        auto physics_go = il2cpp::unity::find_child(
                il2cpp::unity::get_game_object(this_ptr),
                std::vector<std::string>{
                        "visuals",
                        "physics",
                }
        );

        if (il2cpp::unity::is_valid(physics_go)) {
            switch_door_refs.emplace_back(il2cpp::WeakGCRef(this_ptr), il2cpp::WeakGCRef(physics_go));
        }
    }

    IL2CPP_INTERCEPT(LagoonContactSwitchDoors, void, OnDestroy, (app::LagoonContactSwitchDoors* this_ptr)) {
        std::erase_if(switch_door_refs, [&this_ptr](LagoonContactSwitchDoorRef& item) {
            return !item.is_valid() || item.component.ref() == this_ptr;
        });

        next::LagoonContactSwitchDoors::OnDestroy(this_ptr);
    }

    IL2CPP_INTERCEPT(System::Collections::Generic::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_, bool, Remove_With_MethodInfo, (app::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_* this_ptr, int32_t key, Il2CppMethodInfo* method_info)) {
        if (is_in_activate_animator_system_on_update) {
            for (int i = 0; i < this_ptr->fields.entries->max_length; ++i) {
                auto entry = this_ptr->fields.entries->vector[i];

                // Find the entry with the key we're about to remove
                if (entry.key == key) {

                    // If found, check if the target GameObject is one of the stored LagoonContactSwitchDoors physics
                    for (auto it = switch_door_refs.begin(); it != switch_door_refs.end();) {
                        if (it->is_valid()) {
                            if (it->physics.ref() == entry.value.GameObject) {

                                // Store it so we can check the SetActive call in a bit
                                lagoon_contact_switch_door_ref_just_removed = &*it;
                                break;
                            }
                        } else {
                            it = switch_door_refs.erase(it);
                        }

                        if (it == switch_door_refs.end()) {
                            break;
                        }

                        ++it;
                    }
                }
            }
        }

        return next::System::Collections::Generic::Dictionary_2_System_Int32_Moon_Timeline_ActivateAnimatorSystem_ObjectState_::Remove_With_MethodInfo(this_ptr, key, method_info);
    }

    IL2CPP_INTERCEPT(Moon::Timeline::ActivateAnimatorSystem, void, OnUpdate, (app::ActivateAnimatorSystem* this_ptr, float delta_time)) {
        modloader::ScopedSetter _(is_in_activate_animator_system_on_update, true);
        next::Moon::Timeline::ActivateAnimatorSystem::OnUpdate(this_ptr, delta_time);
        lagoon_contact_switch_door_ref_just_removed = nullptr;
    }

    IL2CPP_INTERCEPT(UnityEngine::GameObject, void, SetActive, (app::GameObject* this_ptr, bool active)) {
        // If we encountered the SetActive call the resulted from the jank in ActivateAnimatorSystem,
        // prevent that call and determine whether the door should be open or not by ourself.
        if (
            lagoon_contact_switch_door_ref_just_removed != nullptr &&
            lagoon_contact_switch_door_ref_just_removed->is_valid() &&
            lagoon_contact_switch_door_ref_just_removed->physics.ref() == this_ptr
        ) {
            const auto open_timeline_state = lagoon_contact_switch_door_ref_just_removed->component.ref()->fields.Open->fields._._PlayState_k__BackingField;
            const auto open_loop_timeline_state = lagoon_contact_switch_door_ref_just_removed->component.ref()->fields.OpenedLoop->fields._._PlayState_k__BackingField;
            const auto is_open = open_timeline_state == app::AnimatorPlayState__Enum::Playing || open_loop_timeline_state == app::AnimatorPlayState__Enum::Playing;
            const auto should_activate = !is_open;

            next::UnityEngine::GameObject::SetActive(this_ptr, should_activate);
            lagoon_contact_switch_door_ref_just_removed = nullptr;
            return;
        }

        next::UnityEngine::GameObject::SetActive(this_ptr, active);
    }
} // namespace
