#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>

namespace app::classes::System::Globalization::CharUnicodeInfo_Debug {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Assert, bool condition, app::String* message)
}
