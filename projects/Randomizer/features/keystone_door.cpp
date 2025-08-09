#include <Randomizer/conditions/condition_override.h>

#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/api/uber_states/uber_state.h>

#include <Modloader/app/methods/MoonCustomDoorWithSlots.h>
#include <Modloader/app/methods/MoonDoorWithSlots.h>
#include <Modloader/app/methods/SeinLogicCycle.h>
#include <Modloader/app/methods/UberStateValueCondition.h>
#include <Modloader/app/methods/UnityEngine/Rect.h>
#include <Modloader/app/structs/Boolean__Boxed.h>
#include <Modloader/app/types/MoonCustomDoorWithSlots.h>
#include <Modloader/app/types/MoonTimeline.h>
#include <Modloader/app/types/Rect.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>


using namespace app::classes;

namespace {
    IL2CPP_INTERCEPT(bool, SeinLogicCycle, get_AllowInteraction, app::SeinLogicCycle * this_ptr) {
        // Override this for the keystone door in wastes.
        if (SeinLogicCycle::GetFlags(this_ptr, app::SeinLogicCycle_StateFlags__Enum::IsDigging) != app::SeinLogicCycle_StateFlags__Enum::Clear)
            return true;

        return next::SeinLogicCycle::get_AllowInteraction(this_ptr);
    }

    // No it's not KeystoneDoor
    IL2CPP_INTERCEPT(bool, MoonDoorWithSlots, get_SeinInRange, app::MoonDoorWithSlots * this_ptr) {
        // Allow open Keystone doors from both sides
        return MoonDoorWithSlots::get_DistanceToSein(this_ptr) <= this_ptr->fields.Radius;
    }

    IL2CPP_INTERCEPT(bool, MoonCustomDoorWithSlots, get_CanPlayerTriggerAutomatically, app::MoonCustomDoorWithSlots * this_ptr) { return false; }

    // TODO: Use condition framework instead.
    core::api::uber_states::UberState kwolok_door_available(UberStateGroup::RandoConfig, 6);
    IL2CPP_INTERCEPT(bool, UberStateValueCondition, Validate, app::UberStateValueCondition * this_ptr, app::IContext* context) {
        auto ref = this_ptr->fields.Descriptor;
        if (ref != nullptr && il2cpp::invoke<app::Boolean__Boxed>(ref, "get_HasAReference")->fields &&
            il2cpp::invoke<app::Boolean__Boxed>(ref, "CanResolve", 0)->fields) {
            auto descriptor = il2cpp::invoke<app::IUberState>(ref, "Resolve", 0);
            core::api::uber_states::UberState state(descriptor);
            if (state.group() == static_cast<UberStateGroup>(21786) && (state.state() == 27433 || state.state() == 37225)) {
                return kwolok_door_available.get<bool>();
            }
        }

        return next::UberStateValueCondition::Validate(this_ptr, context);
    }

    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        randomizer::conditions::register_condition_intercept(
            randomizer::conditions::ConditionType::PlayerInsideZoneChecker,
            "kwoloksHollowEntrance/artSetups/frogHeadSetup/doorWithTwoSlots/doorWithTwoSlots/canUseKeystonesZone",
            [](auto, auto) {
            const auto position = core::api::game::player::get_position();

            return UnityEngine::Rect::Contains_2(types::Rect::box(app::Rect{-358.9f, -4235.f, 16.f, 11.f}), position) ||
                UnityEngine::Rect::Contains_2(types::Rect::box(app::Rect{-312.8f, -4239.8f, 19.f, 12.f}), position);
        }
        );
    });

    // Allow opening the Kwolok state door from behind
    auto on_scene_load_handle = core::api::scenes::event_bus().register_handler([](core::api::scenes::SceneLoadEventMetadata* metadata) {
        if (metadata->state != app::SceneState__Enum::Loaded) {
            return;
        }

        if (metadata->scene_name == "kwoloksHollowEntrance") {
            const auto door_go = il2cpp::unity::find_child(
                metadata->scene->fields.SceneRoot, std::vector<std::string>{"artSetups", "frogHeadSetup", "doorWithTwoSlots", "doorWithTwoSlots", "door"}
            );

            const auto open_door_timeline_go = il2cpp::unity::find_child(
                metadata->scene->fields.SceneRoot,
                std::vector<std::string>{"artSetups", "frogHeadSetup", "doorWithTwoSlots", "doorWithTwoSlots", "timelines", "doorOpeningTimeline", "openDoor"}
            );

            const auto open_door_cinematic_character_go = il2cpp::unity::find_child(
                metadata->scene->fields.SceneRoot,
                std::vector<std::string>{
                    "artSetups", "frogHeadSetup", "doorWithTwoSlots", "doorWithTwoSlots", "timelines", "doorOpeningTimeline", "openDoor", "cinematicCharacter"
                }
            );

            if (il2cpp::unity::is_valid(door_go) && il2cpp::unity::is_valid(open_door_timeline_go)) {
                const auto moon_custom_door_with_slots = il2cpp::unity::get_component<app::MoonCustomDoorWithSlots>(
                    door_go, types::MoonCustomDoorWithSlots::get_class()
                );
                moon_custom_door_with_slots->fields._.Radius = 50.f;

                // Skip eyestone animation sinece it doesn't make sense in this context and makes
                // opening the door from the right look weird for a second
                moon_custom_door_with_slots->fields._.OpenDoorTimeline = il2cpp::unity::get_component<app::MoonTimeline>(
                    open_door_timeline_go, types::MoonTimeline::get_class()
                );
                moon_custom_door_with_slots->fields._.HintMessage = core::api::system::create_message_provider("Press [Interact] to insert #2 Keystones#.");
            }

            // Destroy this entity to prevent Ori from staying in the air when opening the door
            if (il2cpp::unity::is_valid(open_door_cinematic_character_go)) {
                il2cpp::unity::destroy_object(open_door_cinematic_character_go);
            }
        }
    });
} // namespace
