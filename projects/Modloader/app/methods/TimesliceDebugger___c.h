#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TimesliceDebugger_c.h>
#include <Modloader/app/structs/ITimeSlicedJob.h>

namespace app::classes::TimesliceDebugger___c {
    IL2CPP_REGISTER_METHOD(0x00AF3790, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TimesliceDebugger_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AF38D0, float, _Update_b__14_0, (app::TimesliceDebugger_c * this_ptr, app::ITimeSlicedJob* x))
} // namespace app::classes::TimesliceDebugger___c
