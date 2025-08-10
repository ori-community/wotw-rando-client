#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IntStateTransition.h>

namespace app::classes::IntStateTransition {
    IL2CPP_REGISTER_METHOD(0x006375F0, void, FixedUpdate, app::IntStateTransition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006378B0, void, OnStopTimeline, app::IntStateTransition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00637AD0, void, Awake, app::IntStateTransition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00637C70, void, OnDestroy, app::IntStateTransition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00637E10, void, OnCheckpointRestore, app::IntStateTransition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00637EF0, void, ctor, app::IntStateTransition* this_ptr)
} // namespace app::classes::IntStateTransition
