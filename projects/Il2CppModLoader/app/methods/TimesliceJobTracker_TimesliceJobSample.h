#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TimesliceJobTracker_TimesliceJobSample {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::TimesliceJobTracker_TimesliceJobSample * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF4B40, void, ctor_2, (app::TimesliceJobTracker_TimesliceJobSample * this_ptr, app::String * time, app::String * owner_name, app::String * job_name, app::String * job_type, double duration, float budget, app::String * contextual_data))
    IL2CPP_REGISTER_METHOD(0x00AF4B80, app::String *, ToString, (app::TimesliceJobTracker_TimesliceJobSample * this_ptr))
}
