#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/FlutteringSlamBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::Moon::FlutteringSlamBehaviour {
    IL2CPP_REGISTER_METHOD(0x014843E0, void, OnEntityInitialized, app::FlutteringSlamBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01484740, void, OnEnter, app::FlutteringSlamBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01484780, app::BehaviourStatus__Enum, OnExecute, app::FlutteringSlamBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01484840, void, OnExit, app::FlutteringSlamBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01484950, void, PlayTimeline, app::FlutteringSlamBehaviour* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x01484A50, void, ResetTimeline, app::FlutteringSlamBehaviour* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x01484840, void, Stop, app::FlutteringSlamBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01484C70, void, SpawnSlamChargeEffect, app::FlutteringSlamBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01484DB0, void, OnCollidedWithGround, app::FlutteringSlamBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01484F00, void, ctor, app::FlutteringSlamBehaviour* this_ptr)
} // namespace app::classes::Moon::FlutteringSlamBehaviour
