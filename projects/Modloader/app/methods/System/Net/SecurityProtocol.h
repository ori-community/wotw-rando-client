#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SslProtocols__Enum.h>

namespace app::classes::System::Net::SecurityProtocol {
    IL2CPP_REGISTER_METHOD(0x01BD3210, void, ThrowOnNotAllowed, (app::SslProtocols__Enum protocols, bool allow_none))
    IL2CPP_REGISTER_METHODINFO(0x04709940, SecurityProtocol_ThrowOnNotAllowed__MethodInfo)
} // namespace app::classes::System::Net::SecurityProtocol
