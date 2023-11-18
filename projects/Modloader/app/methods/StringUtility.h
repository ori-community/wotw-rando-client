#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/IEnumerable_1_System_Char_.h>

namespace app::classes::StringUtility {
    IL2CPP_REGISTER_METHOD(0x00671340, app::String*, AddSpaces, (app::IEnumerable_1_System_Char_ * text))
}
