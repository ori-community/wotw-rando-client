#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::EnumDisabledAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EnumDisabledAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018F25F0, bool, IsDisabled_1, (app::Object * enum_value))
    IL2CPP_REGISTER_METHOD(0x018F2480, bool, IsDisabled_2, (app::EquipmentType__Enum enum_value))
    IL2CPP_REGISTER_METHODINFO(0x0477C3F8, EnumDisabledAttribute_IsDisabled_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018F2310, bool, IsDisabled_3, (app::SpiritShardType__Enum enum_value))
    IL2CPP_REGISTER_METHODINFO(0x04751648, EnumDisabledAttribute_IsDisabled_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018F2310, bool, IsDisabled_4, (app::ByteEnum__Enum enum_value))
    IL2CPP_REGISTER_METHOD(0x018F2480, bool, IsDisabled_5, (app::Int32Enum__Enum enum_value))
}
