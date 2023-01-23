#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_Job__Boxed.h>

namespace app::classes::Moon::SimpleSwayAnimPostprocess_Job {
    IL2CPP_REGISTER_METHOD(0x001DC640, void, Allocate, (app::SimpleSwayAnimPostprocess_Job__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001DC650, void, Dispose, (app::SimpleSwayAnimPostprocess_Job__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001DC660, void, Execute, (app::SimpleSwayAnimPostprocess_Job__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001DC670, void, UpdateTip, (app::SimpleSwayAnimPostprocess_Job__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001DC680, void, UpdateJoints, (app::SimpleSwayAnimPostprocess_Job__Boxed * this_ptr))
} // namespace app::classes::Moon::SimpleSwayAnimPostprocess_Job
