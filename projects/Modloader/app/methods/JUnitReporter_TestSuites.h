#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/JUnitReporter_TestSuites.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/JUnitReporter_TestSuite.h>

namespace app::classes::JUnitReporter_TestSuites {
    IL2CPP_REGISTER_METHOD(0x0064B2F0, void, ctor, (app::JUnitReporter_TestSuites * this_ptr, app::String* id, app::String* name))
    IL2CPP_REGISTER_METHOD(0x0064B460, app::JUnitReporter_TestSuite*, AddTestSuite, (app::JUnitReporter_TestSuites * this_ptr, app::JUnitReporter_TestSuite* test_suite))
    IL2CPP_REGISTER_METHOD(0x0064B500, void, BeginOutputFile, (app::JUnitReporter_TestSuites * this_ptr, app::String* file_path))
    IL2CPP_REGISTER_METHOD(0x0064BD70, void, WriteToFile, (app::JUnitReporter_TestSuites * this_ptr, app::String* file_path))
    IL2CPP_REGISTER_METHOD(0x0064C0F0, void, FinalizeOutputFile, (app::JUnitReporter_TestSuites * this_ptr, app::String* file_path))
} // namespace app::classes::JUnitReporter_TestSuites
