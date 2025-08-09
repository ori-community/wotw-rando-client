#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/GasballSpotOriBehaviour.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::GasballSpotOriBehaviour {
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, get_StatusWhenPlaying, app::GasballSpotOriBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EF0, void, OnEnter, app::GasballSpotOriBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00420F00, void, OnExit, app::GasballSpotOriBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00420FE0, void, ctor, app::GasballSpotOriBehaviour* this_ptr)
} // namespace app::classes::GasballSpotOriBehaviour
