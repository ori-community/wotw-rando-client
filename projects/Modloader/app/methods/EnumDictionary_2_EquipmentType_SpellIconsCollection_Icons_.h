#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpellIconsCollection_Icons.h>
#include <Modloader/app/structs/EnumDictionary_2_EquipmentType_SpellIconsCollection_Icons_.h>
#include <Modloader/app/structs/EquipmentType__Enum.h>

namespace app::classes::EnumDictionary_2_EquipmentType_SpellIconsCollection_Icons_ {
    IL2CPP_REGISTER_METHOD(0x019E4980, app::SpellIconsCollection_Icons, GetValue, (app::EnumDictionary_2_EquipmentType_SpellIconsCollection_Icons_ * this_ptr, app::EquipmentType__Enum key))
    IL2CPP_REGISTER_METHOD(0x019E4F00, void, ctor, (app::EnumDictionary_2_EquipmentType_SpellIconsCollection_Icons_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeSerialize, (app::EnumDictionary_2_EquipmentType_SpellIconsCollection_Icons_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E4830, void, OnAfterDeserialize, (app::EnumDictionary_2_EquipmentType_SpellIconsCollection_Icons_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E35B0, void, OnValidate, (app::EnumDictionary_2_EquipmentType_SpellIconsCollection_Icons_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E4AD0, void, EnsureListMatchesEnum, (app::EnumDictionary_2_EquipmentType_SpellIconsCollection_Icons_ * this_ptr))
} // namespace app::classes::EnumDictionary_2_EquipmentType_SpellIconsCollection_Icons_
