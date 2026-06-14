#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/FlutteringTakeOffBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::Moon::FlutteringTakeOffBehaviour {
    IL2CPP_REGISTER_METHOD(0x014862D0, void, OnEntityInitialized, app::FlutteringTakeOffBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01486BB0, void, OnEnter, app::FlutteringTakeOffBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01486E20, app::BehaviourStatus__Enum, OnExecute, app::FlutteringTakeOffBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01486EE0, void, OnExit, app::FlutteringTakeOffBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01487070, void, PlayTimeline, app::FlutteringTakeOffBehaviour* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x014870A0, void, ResetTimeline, app::FlutteringTakeOffBehaviour* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x014872C0, float, GetLookDirection, app::FlutteringTakeOffBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014873A0, float, GetDirectionToTarget, app::FlutteringTakeOffBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014874C0, void, SpawnTakeOffSlamEffect, app::FlutteringTakeOffBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01487600, void, OnTurnFlipEvent, app::FlutteringTakeOffBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014876E0, void, Stop, app::FlutteringTakeOffBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014877F0, void, ctor, app::FlutteringTakeOffBehaviour* this_ptr)
} // namespace app::classes::Moon::FlutteringTakeOffBehaviour
