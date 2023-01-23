#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberWaterControl.h>
#include <Modloader/app/structs/UberWaterComponent.h>
#include <Modloader/app/structs/MeshFilter.h>

namespace app::classes::UberWaterComponent {
    IL2CPP_REGISTER_METHOD(0x01293B10, app::UberWaterControl*, get_Control, (app::UberWaterComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01293C50, app::MeshFilter*, get_Filter, (app::UberWaterComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::UberWaterComponent * this_ptr))
} // namespace app::classes::UberWaterComponent
