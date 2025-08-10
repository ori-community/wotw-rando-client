#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TimeSliceSystemTester.h>

namespace app::classes::TimeSliceSystemTester {
    IL2CPP_REGISTER_METHOD(0x010F0BF0, void, Start, app::TimeSliceSystemTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010F0DF0, void, OnTestFinished, app::TimeSliceSystemTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010F0E70, void, OnGUI, app::TimeSliceSystemTester* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010F0F30, void, ctor, app::TimeSliceSystemTester* this_ptr)
} // namespace app::classes::TimeSliceSystemTester
