#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::Sockets::SafeSocketHandle {
    IL2CPP_REGISTER_METHOD(0x01BE38C0, void, ctor, (app::SafeSocketHandle * this_ptr, void* preexisting_handle, bool owns_handle))
    IL2CPP_REGISTER_METHOD(0x01BE3A80, bool, ReleaseHandle, (app::SafeSocketHandle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04792BA8, SafeSocketHandle_ReleaseHandle__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01BE4180, void, RegisterForBlockingSyscall, (app::SafeSocketHandle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047600A0, SafeSocketHandle_RegisterForBlockingSyscall__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01BE45E0, void, UnRegisterForBlockingSyscall, (app::SafeSocketHandle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BE4800, void, cctor, ())
} // namespace app::classes::System::Net::Sockets::SafeSocketHandle
