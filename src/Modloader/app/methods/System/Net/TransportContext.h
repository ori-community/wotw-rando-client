#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_System_Security_Authentication_ExtendedProtection_TokenBinding_.h>
#include <Modloader/app/structs/TransportContext.h>

namespace app::classes::System::Net::TransportContext {
    IL2CPP_REGISTER_METHOD(
        0x020AAA60,
        app::IEnumerable_1_System_Security_Authentication_ExtendedProtection_TokenBinding_*,
        GetTlsTokenBindings,
        app::TransportContext* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TransportContext* this_ptr)
} // namespace app::classes::System::Net::TransportContext
