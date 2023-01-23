#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/GasballChase.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>

namespace app::classes::GasballChase {
    IL2CPP_REGISTER_METHOD(0x0041B780, app::Vector3, get_TargetPos, (app::GasballChase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0041C640, void, OnEntityInitialized, (app::GasballChase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0041C730, void, OnEnter, (app::GasballChase * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0041C9A0, app::BehaviourStatus__Enum, OnExecute, (app::GasballChase * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0041D310, void, OnExit, (app::GasballChase * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0041D420, void, OnFailChaseBehaviour, (app::GasballChase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0041D520, void, OnDrawGizmos, (app::GasballChase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0041D8F0, void, ctor, (app::GasballChase * this_ptr))
} // namespace app::classes::GasballChase
