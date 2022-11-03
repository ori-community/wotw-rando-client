#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::EnumDictionary_2_EquipmentType_SpellShardCompatibility_ {
    IL2CPP_REGISTER_METHOD(0x019E5330, app::SpellShardCompatibility*, GetValue, (app::EnumDictionary_2_EquipmentType_SpellShardCompatibility_ * this_ptr, app::EquipmentType__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x04709A18, EnumDictionary_2_EquipmentType_SpellShardCompatibility__GetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019E4530, void, ctor, (app::EnumDictionary_2_EquipmentType_SpellShardCompatibility_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04748DE8, EnumDictionary_2_EquipmentType_SpellShardCompatibility___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeSerialize, (app::EnumDictionary_2_EquipmentType_SpellShardCompatibility_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E5200, void, OnAfterDeserialize, (app::EnumDictionary_2_EquipmentType_SpellShardCompatibility_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E35B0, void, OnValidate, (app::EnumDictionary_2_EquipmentType_SpellShardCompatibility_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E5460, void, EnsureListMatchesEnum, (app::EnumDictionary_2_EquipmentType_SpellShardCompatibility_ * this_ptr))
} // namespace app::classes::EnumDictionary_2_EquipmentType_SpellShardCompatibility_
