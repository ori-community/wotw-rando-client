#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WaterLineModifier.h>

namespace app::classes::WaterLineModifier {
    IL2CPP_REGISTER_METHOD(0x008D8010, void, OnEnable, (app::WaterLineModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D81F0, void, SetProperties, (app::WaterLineModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D82E0, void, Update, (app::WaterLineModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D6880, bool, DoStrip, (app::WaterLineModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D8520, void, ctor, (app::WaterLineModifier * this_ptr))
} // namespace app::classes::WaterLineModifier
