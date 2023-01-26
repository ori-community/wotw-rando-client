#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InteractionSystem.h>
#include <Modloader/app/structs/InteractionTrigger.h>
#include <Modloader/app/structs/VRInteractionController.h>

namespace app::classes::RootMotion::Demos::VRInteractionController {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::InteractionSystem*, get_interactionSystem, (app::VRInteractionController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_interactionSystem, (app::VRInteractionController * this_ptr, app::InteractionSystem* value))
    IL2CPP_REGISTER_METHOD(0x0204BF60, float, get_triggerProgress, (app::VRInteractionController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::InteractionTrigger*, get_currentTrigger, (app::VRInteractionController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_currentTrigger, (app::VRInteractionController * this_ptr, app::InteractionTrigger* value))
    IL2CPP_REGISTER_METHOD(0x0204BF80, void, Start, (app::VRInteractionController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0204C010, void, LateUpdate, (app::VRInteractionController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0204C1A0, bool, CanTrigger, (app::VRInteractionController * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, (app::VRInteractionController * this_ptr))
} // namespace app::classes::RootMotion::Demos::VRInteractionController
