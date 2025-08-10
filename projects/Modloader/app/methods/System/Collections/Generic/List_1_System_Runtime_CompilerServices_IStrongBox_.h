#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IStrongBox.h>
#include <Modloader/app/structs/IStrongBox__Array.h>
#include <Modloader/app/structs/List_1_System_Runtime_CompilerServices_IStrongBox_.h>

namespace app::classes::System::Collections::Generic::List_1_System_Runtime_CompilerServices_IStrongBox_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_System_Runtime_CompilerServices_IStrongBox_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_System_Runtime_CompilerServices_IStrongBox_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_System_Runtime_CompilerServices_IStrongBox_* this_ptr, app::IStrongBox* item)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::IStrongBox__Array*, ToArray, app::List_1_System_Runtime_CompilerServices_IStrongBox_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_System_Runtime_CompilerServices_IStrongBox_
