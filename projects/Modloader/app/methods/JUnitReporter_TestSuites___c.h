#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JUnitReporter_TestSuites_c.h>
#include <Modloader/app/structs/JUnitReporter_TestSuite.h>

namespace app::classes::JUnitReporter_TestSuites___c {
    IL2CPP_REGISTER_METHOD(0x0064C3E0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::JUnitReporter_TestSuites_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0064C520, int32_t, _BeginOutputFile_b__8_0, (app::JUnitReporter_TestSuites_c * this_ptr, app::JUnitReporter_TestSuite* o))
    IL2CPP_REGISTER_METHOD(0x0064C540, int32_t, _BeginOutputFile_b__8_1, (app::JUnitReporter_TestSuites_c * this_ptr, app::JUnitReporter_TestSuite* o))
} // namespace app::classes::JUnitReporter_TestSuites___c
