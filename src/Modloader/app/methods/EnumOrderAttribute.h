#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ByteEnum__Enum__Array.h>
#include <Modloader/app/structs/EnumOrderAttribute.h>
#include <Modloader/app/structs/EquipmentType__Enum__Array.h>
#include <Modloader/app/structs/Int32Enum__Enum__Array.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/SpiritShardType__Enum__Array.h>

namespace app::classes::EnumOrderAttribute {
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor, app::EnumOrderAttribute* this_ptr, int32_t order)
    IL2CPP_REGISTER_METHOD(0x01584FB0, app::Object__Array*, GetOrderedEnums_1, )
    IL2CPP_REGISTER_METHOD(0x01584950, app::EquipmentType__Enum__Array*, GetOrderedEnums_2, )
    IL2CPP_REGISTER_METHOD(0x015842F0, app::SpiritShardType__Enum__Array*, GetOrderedEnums_3, )
    IL2CPP_REGISTER_METHOD(0x015842F0, app::ByteEnum__Enum__Array*, GetOrderedEnums_4, )
    IL2CPP_REGISTER_METHOD(0x01584950, app::Int32Enum__Enum__Array*, GetOrderedEnums_5, )
} // namespace app::classes::EnumOrderAttribute
