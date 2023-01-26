#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MibIPGlobalProperties.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IPEndPoint.h>
#include <Modloader/app/structs/IPEndPoint__Array.h>
#include <Modloader/app/structs/List_1_System_String__1.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::NetworkInformation::MibIPGlobalProperties {
    IL2CPP_REGISTER_METHOD(0x01E76A20, void, ctor, (app::MibIPGlobalProperties * this_ptr, app::String* proc_dir))
    IL2CPP_REGISTER_METHOD(0x01E76B50, app::Exception*, CreateException, (app::MibIPGlobalProperties * this_ptr, app::String* file, app::String* msg))
    IL2CPP_REGISTER_METHOD(0x01E76D20, app::IPEndPoint__Array*, GetLocalAddresses, (app::MibIPGlobalProperties * this_ptr, app::List_1_System_String__1* list))
    IL2CPP_REGISTER_METHOD(0x01E76EA0, app::IPEndPoint*, ToEndpoint, (app::MibIPGlobalProperties * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x01E773E0, void, GetRows, (app::MibIPGlobalProperties * this_ptr, app::String* file, app::List_1_System_String__1* list))
    IL2CPP_REGISTER_METHOD(0x01E77710, app::IPEndPoint__Array*, GetActiveTcpListeners, (app::MibIPGlobalProperties * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E77890, void, cctor, ())
} // namespace app::classes::System::Net::NetworkInformation::MibIPGlobalProperties
