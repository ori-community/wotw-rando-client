#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MapMakerAlternateInteractionBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>

namespace app::classes::Moon::MapMakerAlternateInteractionBehaviour {
    IL2CPP_REGISTER_METHOD(0x0110E3D0, void, OnEnter, (app::MapMakerAlternateInteractionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0110E4C0, app::BehaviourStatus__Enum, OnExecute, (app::MapMakerAlternateInteractionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0110E4F0, void, OnExit, (app::MapMakerAlternateInteractionBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, (app::MapMakerAlternateInteractionBehaviour * this_ptr))
} // namespace app::classes::Moon::MapMakerAlternateInteractionBehaviour
