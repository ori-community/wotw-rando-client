#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Mono::Security::Protocol::Tls::ClientSessionInfo {
    IL2CPP_REGISTER_METHOD(0x01F68830, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01F68910, void, ctor, (app::ClientSessionInfo * this_ptr, app::String* hostname, app::Byte__Array* id))
    IL2CPP_REGISTER_METHOD(0x01F68920, void, Finalize, (app::ClientSessionInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_HostName, (app::ClientSessionInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Byte__Array*, get_Id, (app::ClientSessionInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F689B0, bool, get_Valid, (app::ClientSessionInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F68A70, void, GetContext, (app::ClientSessionInfo * this_ptr, app::Context_1* context))
    IL2CPP_REGISTER_METHOD(0x01F68BE0, void, SetContext, (app::ClientSessionInfo * this_ptr, app::Context_1* context))
    IL2CPP_REGISTER_METHOD(0x01F68D50, void, KeepAlive, (app::ClientSessionInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F68E40, void, Dispose_1, (app::ClientSessionInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F68EF0, void, Dispose_2, (app::ClientSessionInfo * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x01F68FD0, void, CheckDisposed, (app::ClientSessionInfo * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047430C0, ClientSessionInfo_CheckDisposed__MethodInfo)
} // namespace app::classes::Mono::Security::Protocol::Tls::ClientSessionInfo
