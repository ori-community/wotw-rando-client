#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::TimeSlicer::TimeSlicedSimpleJob_TimeSlicedJobDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::TimeSlicedSimpleJob_TimeSlicedJobDelegate * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x010C4980, bool, Invoke, (app::TimeSlicedSimpleJob_TimeSlicedJobDelegate * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x010C4CC0, app::IAsyncResult*, BeginInvoke, (app::TimeSlicedSimpleJob_TimeSlicedJobDelegate * this_ptr, int32_t index, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::TimeSlicedSimpleJob_TimeSlicedJobDelegate * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::Moon::TimeSlicer::TimeSlicedSimpleJob_TimeSlicedJobDelegate
