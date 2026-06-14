#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW_.h>
#include <Modloader/app/structs/Win32IPGlobalProperties_Win32_MIB_TCP6ROW.h>

namespace app::classes::System::Collections::Generic::List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02F1E150,
        void,
        Add,
        app::List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW_* this_ptr,
        app::Win32IPGlobalProperties_Win32_MIB_TCP6ROW* item
    )
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025EFC50,
        app::Win32IPGlobalProperties_Win32_MIB_TCP6ROW*,
        get_Item,
        app::List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW_* this_ptr,
        int32_t index
    )
} // namespace app::classes::System::Collections::Generic::List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW_
