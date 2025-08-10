#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/IPEndPoint__Array.h>
#include <Modloader/app/structs/List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW_.h>
#include <Modloader/app/structs/List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCPROW_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TcpState__Enum.h>
#include <Modloader/app/structs/Win32IPGlobalProperties.h>

namespace app::classes::System::Net::NetworkInformation::Win32IPGlobalProperties {
    IL2CPP_REGISTER_METHOD(
        0x01BC98A0,
        void,
        FillTcpTable,
        app::Win32IPGlobalProperties* this_ptr,
        app::List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCPROW_** tab4,
        app::List_1_System_Net_NetworkInformation_Win32IPGlobalProperties_Win32_MIB_TCP6ROW_** tab6
    )
    IL2CPP_REGISTER_METHOD(0x01BCA1F0, bool, IsListenerState, app::Win32IPGlobalProperties* this_ptr, app::TcpState__Enum state)
    IL2CPP_REGISTER_METHOD(0x01BCA210, app::IPEndPoint__Array*, GetActiveTcpListeners, app::Win32IPGlobalProperties* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BCA550, app::String*, get_DomainName, app::Win32IPGlobalProperties* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BCA600, int32_t, GetTcpTable, app::Byte__Array* p_tcp_table, int32_t* pdw_size, bool b_order)
    IL2CPP_REGISTER_METHOD(0x01BCA6D0, int32_t, GetTcp6Table, app::Byte__Array* tcp_table, int32_t* size_pointer, bool order)
    IL2CPP_REGISTER_METHOD(0x01BCA7A0, uint16_t, ntohs, uint16_t netshort)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::Win32IPGlobalProperties* this_ptr)
} // namespace app::classes::System::Net::NetworkInformation::Win32IPGlobalProperties
