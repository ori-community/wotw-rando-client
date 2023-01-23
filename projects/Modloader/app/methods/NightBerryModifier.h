#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NightBerryModifier.h>

namespace app::classes::NightBerryModifier {
    IL2CPP_REGISTER_METHOD(0x00601190, void, SetProperties, (app::NightBerryModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00601250, void, ctor, (app::NightBerryModifier * this_ptr))
} // namespace app::classes::NightBerryModifier
