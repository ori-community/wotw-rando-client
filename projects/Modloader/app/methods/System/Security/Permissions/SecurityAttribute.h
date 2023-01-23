#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SecurityAttribute.h>
#include <Modloader/app/structs/SecurityAction__Enum.h>

namespace app::classes::System::Security::Permissions::SecurityAttribute {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, (app::SecurityAttribute * this_ptr, app::SecurityAction__Enum action))
    IL2CPP_REGISTER_METHOD(0x00724AE0, bool, get_Unrestricted, (app::SecurityAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_Action, (app::SecurityAttribute * this_ptr, app::SecurityAction__Enum value))
} // namespace app::classes::System::Security::Permissions::SecurityAttribute
