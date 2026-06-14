#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>

namespace app::classes::System::ComponentModel::SyntaxCheck {
    IL2CPP_REGISTER_METHOD(0x029AD4D0, bool, CheckMachineName, app::String* value)
    IL2CPP_REGISTER_METHOD(0x029AD5C0, bool, CheckPath, app::String* value)
    IL2CPP_REGISTER_METHOD(0x029AD690, bool, CheckRootedPath, app::String* value)
} // namespace app::classes::System::ComponentModel::SyntaxCheck
