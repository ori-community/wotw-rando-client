#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SandWormThrownBehaviour.h>
#include <Modloader/app/structs/IBlackboard.h>

namespace app::classes::SandWormThrownBehaviour {
    IL2CPP_REGISTER_METHOD(0x008663D0, float, get_Duration, (app::SandWormThrownBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008663E0, void, set_Duration, (app::SandWormThrownBehaviour * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00C27730, void, OnExecute, (app::SandWormThrownBehaviour * this_ptr, app::IBlackboard* blackboard))
    IL2CPP_REGISTER_METHOD(0x00C27810, void, OnUpdateBehaviour, (app::SandWormThrownBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00615280, void, ctor, (app::SandWormThrownBehaviour * this_ptr))
} // namespace app::classes::SandWormThrownBehaviour
