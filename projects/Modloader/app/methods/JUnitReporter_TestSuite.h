#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/JUnitReporter_TestSuite.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/JUnitReporter_TestCase.h>
#include <Modloader/app/structs/TimeSpan.h>

namespace app::classes::JUnitReporter_TestSuite {
    IL2CPP_REGISTER_METHOD(0x006498D0, void, ctor, (app::JUnitReporter_TestSuite * this_ptr, app::String* id, app::String* name))
    IL2CPP_REGISTER_METHOD(0x00649A40, int32_t, get_Tests, (app::JUnitReporter_TestSuite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00649AD0, int32_t, get_Failures, (app::JUnitReporter_TestSuite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00649CC0, app::JUnitReporter_TestCase*, AddTestCase_1, (app::JUnitReporter_TestSuite * this_ptr, app::String* name, app::String* class_name))
    IL2CPP_REGISTER_METHOD(0x00649FF0, app::JUnitReporter_TestCase*, AddTestCase_2, (app::JUnitReporter_TestSuite * this_ptr, app::JUnitReporter_TestCase* test_case))
    IL2CPP_REGISTER_METHOD(0x0064A0C0, app::String*, ToString, (app::JUnitReporter_TestSuite * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0064A530, void, BeginOutputFile, (app::JUnitReporter_TestSuite * this_ptr, app::String* file_path))
    IL2CPP_REGISTER_METHOD(0x0064AAB0, void, WriteToFile, (app::JUnitReporter_TestSuite * this_ptr, app::String* file_path))
    IL2CPP_REGISTER_METHOD(0x0064AE30, void, FinalizeOutputFile, (app::String * file_path))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, SetTestDuration, (app::JUnitReporter_TestSuite * this_ptr, app::TimeSpan time_span))
} // namespace app::classes::JUnitReporter_TestSuite
