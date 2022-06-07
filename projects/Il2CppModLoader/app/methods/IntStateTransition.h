#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::IntStateTransition {
    IL2CPP_REGISTER_METHOD(0x006375F0, void, FixedUpdate, (app::IntStateTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006378B0, void, OnStopTimeline, (app::IntStateTransition * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04775CB8, IntStateTransition_OnStopTimeline__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00637AD0, void, Awake, (app::IntStateTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00637C70, void, OnDestroy, (app::IntStateTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00637E10, void, OnCheckpointRestore, (app::IntStateTransition * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047844B0, IntStateTransition_OnCheckpointRestore__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00637EF0, void, ctor, (app::IntStateTransition * this_ptr))
}
