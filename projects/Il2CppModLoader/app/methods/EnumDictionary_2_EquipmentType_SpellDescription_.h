#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::EnumDictionary_2_EquipmentType_SpellDescription_ {
    IL2CPP_REGISTER_METHOD(0x019E5330, app::SpellDescription*, GetValue, (app::EnumDictionary_2_EquipmentType_SpellDescription_ * this_ptr, app::EquipmentType__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x04725DC0, EnumDictionary_2_EquipmentType_SpellDescription__GetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019E4530, void, ctor, (app::EnumDictionary_2_EquipmentType_SpellDescription_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04722980, EnumDictionary_2_EquipmentType_SpellDescription___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeSerialize, (app::EnumDictionary_2_EquipmentType_SpellDescription_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E5200, void, OnAfterDeserialize, (app::EnumDictionary_2_EquipmentType_SpellDescription_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E35B0, void, OnValidate, (app::EnumDictionary_2_EquipmentType_SpellDescription_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E5460, void, EnsureListMatchesEnum, (app::EnumDictionary_2_EquipmentType_SpellDescription_ * this_ptr))
} // namespace app::classes::EnumDictionary_2_EquipmentType_SpellDescription_
