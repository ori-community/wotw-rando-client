#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InteropHelp.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Steamworks::InteropHelp {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, TestIfPlatformSupported, )
    IL2CPP_REGISTER_METHOD(0x015FFAE0, void, TestIfAvailableClient, )
    IL2CPP_REGISTER_METHOD(0x015FFBA0, void, TestIfAvailableGameServer, )
    IL2CPP_REGISTER_METHOD(0x015FFC60, app::String*, PtrToStringUTF8, void* native_utf8)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::InteropHelp* this_ptr)
} // namespace app::classes::Steamworks::InteropHelp
