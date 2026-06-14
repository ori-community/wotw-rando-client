#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ByteEnum__Enum.h>
#include <Modloader/app/structs/EnumDisabledAttribute.h>
#include <Modloader/app/structs/EquipmentType__Enum.h>
#include <Modloader/app/structs/Int32Enum__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SpiritShardType__Enum.h>

namespace app::classes::EnumDisabledAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::EnumDisabledAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018F25F0, bool, IsDisabled_1, app::Object* enum_value)
    IL2CPP_REGISTER_METHOD(0x018F2480, bool, IsDisabled_2, app::EquipmentType__Enum enum_value)
    IL2CPP_REGISTER_METHOD(0x018F2310, bool, IsDisabled_3, app::SpiritShardType__Enum enum_value)
    IL2CPP_REGISTER_METHOD(0x018F2310, bool, IsDisabled_4, app::ByteEnum__Enum enum_value)
    IL2CPP_REGISTER_METHOD(0x018F2480, bool, IsDisabled_5, app::Int32Enum__Enum enum_value)
} // namespace app::classes::EnumDisabledAttribute
