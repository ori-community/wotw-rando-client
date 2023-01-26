#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IPAddress.h>
#include <Modloader/app/structs/IPAddress__Array.h>
#include <Modloader/app/structs/IPHostEntry.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Task_1_System_Net_IPAddress_.h>
#include <Modloader/app/structs/Task_1_System_Net_IPHostEntry_.h>

namespace app::classes::System::Net::Dns {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01EB0B40, app::IAsyncResult*, BeginGetHostByName, (app::String * host_name, app::AsyncCallback* request_callback, app::Object* state_object))
    IL2CPP_REGISTER_METHOD(0x01EB0D00, app::IAsyncResult*, BeginResolve, (app::String * host_name, app::AsyncCallback* request_callback, app::Object* state_object))
    IL2CPP_REGISTER_METHOD(0x01EB0EC0, app::IAsyncResult*, BeginGetHostAddresses, (app::String * host_name_or_address, app::AsyncCallback* request_callback, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x01EB1120, app::IAsyncResult*, BeginGetHostEntry_1, (app::String * host_name_or_address, app::AsyncCallback* request_callback, app::Object* state_object))
    IL2CPP_REGISTER_METHOD(0x01EB1380, app::IAsyncResult*, BeginGetHostEntry_2, (app::IPAddress * address, app::AsyncCallback* request_callback, app::Object* state_object))
    IL2CPP_REGISTER_METHOD(0x01EB1540, app::IPHostEntry*, EndGetHostByName, (app::IAsyncResult * async_result))
    IL2CPP_REGISTER_METHOD(0x01EB16E0, app::IPHostEntry*, EndResolve, (app::IAsyncResult * async_result))
    IL2CPP_REGISTER_METHOD(0x01EB1880, app::IPAddress__Array*, EndGetHostAddresses, (app::IAsyncResult * async_result))
    IL2CPP_REGISTER_METHOD(0x01EB1A20, app::IPHostEntry*, EndGetHostEntry, (app::IAsyncResult * async_result))
    IL2CPP_REGISTER_METHOD(0x01EB1C20, bool, GetHostByName_internal, (app::String * host, app::String** h_name, app::String__Array** h_aliases, app::String__Array** h_addr_list, int32_t hint))
    IL2CPP_REGISTER_METHOD(0x01EB1C30, bool, GetHostByAddr_internal, (app::String * addr, app::String** h_name, app::String__Array** h_aliases, app::String__Array** h_addr_list, int32_t hint))
    IL2CPP_REGISTER_METHOD(0x01EB1C40, bool, GetHostName_internal, (app::String * *h_name))
    IL2CPP_REGISTER_METHOD(0x01EB1D40, void, Error_11001, (app::String * host_name))
    IL2CPP_REGISTER_METHOD(0x01EB1DB0, app::IPHostEntry*, hostent_to_IPHostEntry, (app::String * original_host_name, app::String* h_name, app::String__Array* h_aliases, app::String__Array* h_addrlist))
    IL2CPP_REGISTER_METHOD(0x01EB21E0, app::IPHostEntry*, GetHostByAddress_1, (app::IPAddress * address))
    IL2CPP_REGISTER_METHOD(0x01EB22D0, app::IPHostEntry*, GetHostByAddress_2, (app::String * address))
    IL2CPP_REGISTER_METHOD(0x01EB23B0, app::IPHostEntry*, GetHostByAddressFromString, (app::String * address, bool parse))
    IL2CPP_REGISTER_METHOD(0x01EB2570, app::IPHostEntry*, GetHostEntry_1, (app::String * host_name_or_address))
    IL2CPP_REGISTER_METHOD(0x01EB2830, app::IPHostEntry*, GetHostEntry_2, (app::IPAddress * address))
    IL2CPP_REGISTER_METHOD(0x01EB2920, app::IPAddress__Array*, GetHostAddresses, (app::String * host_name_or_address))
    IL2CPP_REGISTER_METHOD(0x01EB2B50, app::IPHostEntry*, GetHostByName, (app::String * host_name))
    IL2CPP_REGISTER_METHOD(0x01EB2CD0, app::String*, GetHostName, ())
    IL2CPP_REGISTER_METHOD(0x01EB2E60, app::IPHostEntry*, Resolve, (app::String * host_name))
    IL2CPP_REGISTER_METHOD(0x01EB3010, app::Task_1_System_Net_IPAddress_*, GetHostAddressesAsync, (app::String * host_name_or_address))
    IL2CPP_REGISTER_METHOD(0x01EB32B0, app::Task_1_System_Net_IPHostEntry_*, GetHostEntryAsync_1, (app::IPAddress * address))
    IL2CPP_REGISTER_METHOD(0x01EB3550, app::Task_1_System_Net_IPHostEntry_*, GetHostEntryAsync_2, (app::String * host_name_or_address))
} // namespace app::classes::System::Net::Dns
