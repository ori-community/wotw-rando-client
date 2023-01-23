#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AlertLevel__Enum_1.h>
#include <Modloader/app/structs/Alert_1.h>
#include <Modloader/app/structs/AlertDescription__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Mono::Security::Interface::Alert {
    IL2CPP_REGISTER_METHOD(0x0052B590, app::AlertLevel__Enum_1, get_Level, (app::Alert_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00504D80, app::AlertDescription__Enum, get_Description, (app::Alert_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A45F40, void, ctor, (app::Alert_1 * this_ptr, app::AlertDescription__Enum description))
    IL2CPP_REGISTER_METHOD(0x02A45FC0, void, inferAlertLevel, (app::Alert_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A46040, app::String*, ToString, (app::Alert_1 * this_ptr))
} // namespace app::classes::Mono::Security::Interface::Alert
