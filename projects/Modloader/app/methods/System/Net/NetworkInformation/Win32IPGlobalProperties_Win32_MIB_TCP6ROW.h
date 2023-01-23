#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IPEndPoint.h>
#include <Modloader/app/structs/Win32IPGlobalProperties_Win32_MIB_TCP6ROW.h>

namespace app::classes::System::Net::NetworkInformation::Win32IPGlobalProperties_Win32_MIB_TCP6ROW {
    IL2CPP_REGISTER_METHOD(0x01BCA840, app::IPEndPoint*, get_LocalEndPoint, (app::Win32IPGlobalProperties_Win32_MIB_TCP6ROW * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Win32IPGlobalProperties_Win32_MIB_TCP6ROW * this_ptr))
} // namespace app::classes::System::Net::NetworkInformation::Win32IPGlobalProperties_Win32_MIB_TCP6ROW
