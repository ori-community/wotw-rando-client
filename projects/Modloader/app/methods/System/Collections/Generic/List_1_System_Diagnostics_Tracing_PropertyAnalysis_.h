#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_Diagnostics_Tracing_PropertyAnalysis_.h>
#include <Modloader/app/structs/PropertyAnalysis.h>
#include <Modloader/app/structs/PropertyAnalysis__Array.h>

namespace app::classes::System::Collections::Generic::List_1_System_Diagnostics_Tracing_PropertyAnalysis_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_System_Diagnostics_Tracing_PropertyAnalysis_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_System_Diagnostics_Tracing_PropertyAnalysis_* this_ptr, app::PropertyAnalysis* item)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::PropertyAnalysis__Array*, ToArray, app::List_1_System_Diagnostics_Tracing_PropertyAnalysis_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_System_Diagnostics_Tracing_PropertyAnalysis_
