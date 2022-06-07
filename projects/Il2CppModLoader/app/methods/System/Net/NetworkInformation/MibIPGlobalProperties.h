#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::NetworkInformation::MibIPGlobalProperties {
    IL2CPP_REGISTER_METHOD(0x01E76A20, void, ctor, (app::MibIPGlobalProperties * this_ptr, app::String * proc_dir))
    IL2CPP_REGISTER_METHOD(0x01E76B50, app::Exception *, CreateException, (app::MibIPGlobalProperties * this_ptr, app::String * file, app::String * msg))
    IL2CPP_REGISTER_METHOD(0x01E76D20, app::IPEndPoint__Array *, GetLocalAddresses, (app::MibIPGlobalProperties * this_ptr, app::List_1_System_String__1 * list))
    IL2CPP_REGISTER_METHOD(0x01E76EA0, app::IPEndPoint *, ToEndpoint, (app::MibIPGlobalProperties * this_ptr, app::String * s))
    IL2CPP_REGISTER_METHOD(0x01E773E0, void, GetRows, (app::MibIPGlobalProperties * this_ptr, app::String * file, app::List_1_System_String__1 * list))
    IL2CPP_REGISTER_METHODINFO(0x0477B748, MibIPGlobalProperties_GetRows__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E77710, app::IPEndPoint__Array *, GetActiveTcpListeners, (app::MibIPGlobalProperties * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E77890, void, cctor, ())
}
