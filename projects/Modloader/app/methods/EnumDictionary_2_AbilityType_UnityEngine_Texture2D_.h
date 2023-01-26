#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnumDictionary_2_AbilityType_UnityEngine_Texture2D_.h>
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/Texture2D.h>

namespace app::classes::EnumDictionary_2_AbilityType_UnityEngine_Texture2D_ {
    IL2CPP_REGISTER_METHOD(0x019E4530, void, ctor, (app::EnumDictionary_2_AbilityType_UnityEngine_Texture2D_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E3FA0, app::Texture2D*, GetValue, (app::EnumDictionary_2_AbilityType_UnityEngine_Texture2D_ * this_ptr, app::AbilityType__Enum key))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeSerialize, (app::EnumDictionary_2_AbilityType_UnityEngine_Texture2D_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E3E70, void, OnAfterDeserialize, (app::EnumDictionary_2_AbilityType_UnityEngine_Texture2D_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E35B0, void, OnValidate, (app::EnumDictionary_2_AbilityType_UnityEngine_Texture2D_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E4120, void, EnsureListMatchesEnum, (app::EnumDictionary_2_AbilityType_UnityEngine_Texture2D_ * this_ptr))
} // namespace app::classes::EnumDictionary_2_AbilityType_UnityEngine_Texture2D_
