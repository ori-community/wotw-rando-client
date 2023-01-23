#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MirroringData.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/MirroringData_Axis__Enum.h>
#include <Modloader/app/structs/Single__Array.h>

namespace app::classes::MirroringData {
    IL2CPP_REGISTER_METHOD(0x01452F50, void, ctor_1, (app::MirroringData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01452FE0, void, ctor_2, (app::MirroringData * this_ptr, app::String* joint_name, app::String* mirror_name, app::MirroringData_Axis__Enum axis, app::Single__Array* mirror_multiplies))
    IL2CPP_REGISTER_METHOD(0x01452FF0, app::String*, GetOutputChannel, (app::MirroringData * this_ptr, app::String* property_name))
    IL2CPP_REGISTER_METHOD(0x014532A0, float, GetMultiply, (app::MirroringData * this_ptr, app::String* property_name))
} // namespace app::classes::MirroringData
