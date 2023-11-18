#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpiritShardDescription.h>
#include <Modloader/app/structs/EnumDictionary_2_SpiritShardType_SpiritShardDescription_.h>
#include <Modloader/app/structs/SpiritShardType__Enum.h>

namespace app::classes::EnumDictionary_2_SpiritShardType_SpiritShardDescription_ {
    IL2CPP_REGISTER_METHOD(0x019E3FA0, app::SpiritShardDescription*, GetValue, (app::EnumDictionary_2_SpiritShardType_SpiritShardDescription_ * this_ptr, app::SpiritShardType__Enum key))
    IL2CPP_REGISTER_METHOD(0x019E35B0, void, OnValidate, (app::EnumDictionary_2_SpiritShardType_SpiritShardDescription_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E4530, void, ctor, (app::EnumDictionary_2_SpiritShardType_SpiritShardDescription_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeSerialize, (app::EnumDictionary_2_SpiritShardType_SpiritShardDescription_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E3E70, void, OnAfterDeserialize, (app::EnumDictionary_2_SpiritShardType_SpiritShardDescription_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E4120, void, EnsureListMatchesEnum, (app::EnumDictionary_2_SpiritShardType_SpiritShardDescription_ * this_ptr))
} // namespace app::classes::EnumDictionary_2_SpiritShardType_SpiritShardDescription_
