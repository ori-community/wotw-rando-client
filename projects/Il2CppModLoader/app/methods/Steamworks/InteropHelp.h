#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Steamworks::InteropHelp {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, TestIfPlatformSupported, ())
    IL2CPP_REGISTER_METHOD(0x015FFAE0, void, TestIfAvailableClient, ())
    IL2CPP_REGISTER_METHODINFO(0x0474CE08, InteropHelp_TestIfAvailableClient__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015FFBA0, void, TestIfAvailableGameServer, ())
    IL2CPP_REGISTER_METHODINFO(0x047054D0, InteropHelp_TestIfAvailableGameServer__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015FFC60, app::String *, PtrToStringUTF8, (void * native_utf8))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::InteropHelp * this_ptr))
}
