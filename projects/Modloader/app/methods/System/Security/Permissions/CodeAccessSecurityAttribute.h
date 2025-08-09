#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CodeAccessSecurityAttribute.h>
#include <Modloader/app/structs/SecurityAction__Enum.h>

namespace app::classes::System::Security::Permissions::CodeAccessSecurityAttribute {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::CodeAccessSecurityAttribute* this_ptr, app::SecurityAction__Enum action)
}
