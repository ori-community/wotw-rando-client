#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Mono::Security::Protocol::Tls::ClientSessionCache {
    IL2CPP_REGISTER_METHOD(0x01F674F0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01F67710, void, Add, (app::String * host, app::Byte__Array* id))
    IL2CPP_REGISTER_METHOD(0x01F67C70, app::Byte__Array*, FromHost, (app::String * host))
    IL2CPP_REGISTER_METHOD(0x01F68020, app::ClientSessionInfo*, FromContext, (app::Context_1 * context, bool check_validity))
    IL2CPP_REGISTER_METHOD(0x01F68200, bool, SetContextInCache, (app::Context_1 * context))
    IL2CPP_REGISTER_METHOD(0x01F68510, bool, SetContextFromCache, (app::Context_1 * context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ClientSessionCache * this_ptr))
} // namespace app::classes::Mono::Security::Protocol::Tls::ClientSessionCache
