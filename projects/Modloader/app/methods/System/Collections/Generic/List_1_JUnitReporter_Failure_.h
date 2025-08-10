#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JUnitReporter_Failure.h>
#include <Modloader/app/structs/List_1_JUnitReporter_Failure_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_JUnitReporter_Failure_.h>

namespace app::classes::System::Collections::Generic::List_1_JUnitReporter_Failure_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_JUnitReporter_Failure_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_JUnitReporter_Failure_, GetEnumerator, app::List_1_JUnitReporter_Failure_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_JUnitReporter_Failure_* this_ptr, app::JUnitReporter_Failure* item)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_JUnitReporter_Failure_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_JUnitReporter_Failure_
