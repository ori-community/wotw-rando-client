#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_Diagnostics_StackFrame_.h>
#include <Modloader/app/structs/StackFrame.h>
#include <Modloader/app/structs/StackFrame__Array.h>

namespace app::classes::System::Collections::Generic::List_1_System_Diagnostics_StackFrame_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_System_Diagnostics_StackFrame_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_System_Diagnostics_StackFrame_ * this_ptr, app::StackFrame* item))
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::StackFrame__Array*, ToArray, (app::List_1_System_Diagnostics_StackFrame_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_System_Diagnostics_StackFrame_
