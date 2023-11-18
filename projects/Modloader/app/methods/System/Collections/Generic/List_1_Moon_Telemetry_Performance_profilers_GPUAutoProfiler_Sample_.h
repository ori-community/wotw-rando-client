#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_.h>
#include <Modloader/app/structs/GPUAutoProfiler_Sample.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_ * this_ptr, app::GPUAutoProfiler_Sample* item))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_, GetEnumerator, (app::List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::GPUAutoProfiler_Sample*, get_Item, (app::List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_ * this_ptr, int32_t index))
} // namespace app::classes::System::Collections::Generic::List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfiler_Sample_
