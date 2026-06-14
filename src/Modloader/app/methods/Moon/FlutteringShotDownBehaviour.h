#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/FlutteringShotDownBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::Moon::FlutteringShotDownBehaviour {
    IL2CPP_REGISTER_METHOD(0x014829B0, void, OnEntityInitialized, app::FlutteringShotDownBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01482D10, void, OnEnter, app::FlutteringShotDownBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01482D50, app::BehaviourStatus__Enum, OnExecute, app::FlutteringShotDownBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01482E10, void, OnExit, app::FlutteringShotDownBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01482F20, void, PlayTimeline, app::FlutteringShotDownBehaviour* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x01483020, void, ResetTimeline, app::FlutteringShotDownBehaviour* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x01483240, void, OnCollidedWithGround, app::FlutteringShotDownBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01482E10, void, Stop, app::FlutteringShotDownBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014833C0, void, ctor, app::FlutteringShotDownBehaviour* this_ptr)
} // namespace app::classes::Moon::FlutteringShotDownBehaviour
