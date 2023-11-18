#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WaterDebrisModifier.h>

namespace app::classes::WaterDebrisModifier {
    IL2CPP_REGISTER_METHOD(0x008D61D0, void, SetProperties, (app::WaterDebrisModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D6290, void, ctor, (app::WaterDebrisModifier * this_ptr))
} // namespace app::classes::WaterDebrisModifier
