#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_3_Moon_TimeSlicer_ITimeSlicedJob_Single_Single_.h>
#include <Modloader/app/structs/ITimeSlicedJob.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Action_3_Moon_TimeSlicer_ITimeSlicedJob_Single_Single_ {
    IL2CPP_REGISTER_METHOD(
        0x02C15CB0,
        void,
        Invoke,
        app::Action_3_Moon_TimeSlicer_ITimeSlicedJob_Single_Single_* this_ptr,
        app::ITimeSlicedJob* arg1,
        float arg2,
        float arg3
    )
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Action_3_Moon_TimeSlicer_ITimeSlicedJob_Single_Single_* this_ptr, app::Object* object, void* method_1)
} // namespace app::classes::System::Action_3_Moon_TimeSlicer_ITimeSlicedJob_Single_Single_
