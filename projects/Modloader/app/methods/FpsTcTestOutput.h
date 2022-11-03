#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::FpsTcTestOutput {
    IL2CPP_REGISTER_METHOD(0x01636C40, void, ctor, (app::FpsTcTestOutput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01637070, void, Write, (app::FpsTcTestOutput * this_ptr, app::FPSTestResult* test_result))
    IL2CPP_REGISTER_METHOD(0x01637510, void, Close, (app::FpsTcTestOutput * this_ptr))
} // namespace app::classes::FpsTcTestOutput
