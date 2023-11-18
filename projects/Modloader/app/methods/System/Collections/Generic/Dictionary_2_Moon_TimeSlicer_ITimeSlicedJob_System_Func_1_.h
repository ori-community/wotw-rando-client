#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1_.h>
#include <Modloader/app/structs/Func_1_Moon_TimeSlicer_TimeSlicedJobPriority_.h>
#include <Modloader/app/structs/ITimeSlicedJob.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1_ {
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1_ * this_ptr, app::ITimeSlicedJob* key))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1_ * this_ptr, app::ITimeSlicedJob* key, app::Func_1_Moon_TimeSlicer_TimeSlicedJobPriority_* value))
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1_ * this_ptr, app::ITimeSlicedJob* key, app::Func_1_Moon_TimeSlicer_TimeSlicedJobPriority_** value))
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, (app::Dictionary_2_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1_ * this_ptr, app::ITimeSlicedJob* key))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_TimeSlicer_ITimeSlicedJob_System_Func_1_
