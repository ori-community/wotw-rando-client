#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HebrewNumber_HebrewValue.h>
#include <Modloader/app/structs/HebrewNumber_HebrewToken__Enum.h>

namespace app::classes::System::Globalization::HebrewNumber_HebrewValue {
    IL2CPP_REGISTER_METHOD(0x01857090, void, ctor, (app::HebrewNumber_HebrewValue * this_ptr, app::HebrewNumber_HebrewToken__Enum token, int32_t value))
}
