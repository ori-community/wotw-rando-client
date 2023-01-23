#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/JUnitReporter_TestSuite_c.h>
#include <Modloader/app/structs/JUnitReporter_TestCase.h>

namespace app::classes::JUnitReporter_TestSuite___c {
    IL2CPP_REGISTER_METHOD(0x0064B120, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::JUnitReporter_TestSuite_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0064B260, int32_t, _get_Failures_b__8_0, (app::JUnitReporter_TestSuite_c * this_ptr, app::JUnitReporter_TestCase* o))
    IL2CPP_REGISTER_METHODINFO(0x0473FDC0, JUnitReporter_TestSuite_c__get_Failures_b__8_0__MethodInfo)
} // namespace app::classes::JUnitReporter_TestSuite___c
