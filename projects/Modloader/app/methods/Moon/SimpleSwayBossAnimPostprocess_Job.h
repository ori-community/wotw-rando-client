#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SimpleSwayBossAnimPostprocess_Job__Boxed.h>
#include <Modloader/app/structs/TransformAccess.h>

namespace app::classes::Moon::SimpleSwayBossAnimPostprocess_Job {
    IL2CPP_REGISTER_METHOD(0x001DC710, void, Allocate, (app::SimpleSwayBossAnimPostprocess_Job__Boxed * this_ptr, int32_t chain_count))
    IL2CPP_REGISTER_METHOD(0x001DC720, void, Dispose, (app::SimpleSwayBossAnimPostprocess_Job__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001DC730, void, Execute, (app::SimpleSwayBossAnimPostprocess_Job__Boxed * this_ptr, int32_t index, app::TransformAccess transform))
} // namespace app::classes::Moon::SimpleSwayBossAnimPostprocess_Job
