#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::TransportContext {
    IL2CPP_REGISTER_METHOD(0x020AAA60, app::IEnumerable_1_System_Security_Authentication_ExtendedProtection_TokenBinding_*, GetTlsTokenBindings, (app::TransportContext * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04758030, TransportContext_GetTlsTokenBindings__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TransportContext * this_ptr))
} // namespace app::classes::System::Net::TransportContext
