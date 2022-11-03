#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::JUnitReporter_TestCase {
    IL2CPP_REGISTER_METHOD(0x00649310, void, ctor, (app::JUnitReporter_TestCase * this_ptr, app::String* id, app::String* name))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::List_1_JUnitReporter_Failure_*, get_Failures, (app::JUnitReporter_TestCase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00649480, app::String*, ToString, (app::JUnitReporter_TestCase * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, SetTestDuration, (app::JUnitReporter_TestCase * this_ptr, app::TimeSpan time_span))
    IL2CPP_REGISTER_METHOD(0x00649820, void, AddFailure, (app::JUnitReporter_TestCase * this_ptr, app::JUnitReporter_Failure* failure))
} // namespace app::classes::JUnitReporter_TestCase
