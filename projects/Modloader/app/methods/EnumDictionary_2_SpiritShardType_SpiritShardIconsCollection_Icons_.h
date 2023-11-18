#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpiritShardIconsCollection_Icons.h>
#include <Modloader/app/structs/EnumDictionary_2_SpiritShardType_SpiritShardIconsCollection_Icons_.h>
#include <Modloader/app/structs/SpiritShardType__Enum.h>

namespace app::classes::EnumDictionary_2_SpiritShardType_SpiritShardIconsCollection_Icons_ {
    IL2CPP_REGISTER_METHOD(0x019E35E0, app::SpiritShardIconsCollection_Icons, GetValue, (app::EnumDictionary_2_SpiritShardType_SpiritShardIconsCollection_Icons_ * this_ptr, app::SpiritShardType__Enum key))
    IL2CPP_REGISTER_METHOD(0x019E3B70, void, ctor, (app::EnumDictionary_2_SpiritShardType_SpiritShardIconsCollection_Icons_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeSerialize, (app::EnumDictionary_2_SpiritShardType_SpiritShardIconsCollection_Icons_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E3460, void, OnAfterDeserialize, (app::EnumDictionary_2_SpiritShardType_SpiritShardIconsCollection_Icons_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E35B0, void, OnValidate, (app::EnumDictionary_2_SpiritShardType_SpiritShardIconsCollection_Icons_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E3740, void, EnsureListMatchesEnum, (app::EnumDictionary_2_SpiritShardType_SpiritShardIconsCollection_Icons_ * this_ptr))
} // namespace app::classes::EnumDictionary_2_SpiritShardType_SpiritShardIconsCollection_Icons_
