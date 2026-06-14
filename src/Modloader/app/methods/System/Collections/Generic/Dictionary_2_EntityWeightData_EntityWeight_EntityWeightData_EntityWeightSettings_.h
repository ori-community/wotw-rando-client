#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeightSettings.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeight__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02DB2350,
        void,
        Add,
        app::Dictionary_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_* this_ptr,
        app::EntityWeightData_EntityWeight__Enum key,
        app::EntityWeightData_EntityWeightSettings value
    )
    IL2CPP_REGISTER_METHOD(
        0x02DB2120,
        app::EntityWeightData_EntityWeightSettings,
        get_Item,
        app::Dictionary_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_* this_ptr,
        app::EntityWeightData_EntityWeight__Enum key
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_
