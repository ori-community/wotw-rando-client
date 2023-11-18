#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnumDictionary_2_System_Int32Enum_System_Object_.h>
#include <Modloader/app/structs/Int32Enum__Enum.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::EnumDictionary_2_System_Int32Enum_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBeforeSerialize, (app::EnumDictionary_2_System_Int32Enum_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E5200, void, OnAfterDeserialize, (app::EnumDictionary_2_System_Int32Enum_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E35B0, void, OnValidate, (app::EnumDictionary_2_System_Int32Enum_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E5330, app::Object*, GetValue, (app::EnumDictionary_2_System_Int32Enum_System_Object_ * this_ptr, app::Int32Enum__Enum key))
    IL2CPP_REGISTER_METHOD(0x019E40D0, app::Object*, FindValue, (app::EnumDictionary_2_System_Int32Enum_System_Object_ * this_ptr, app::Int32Enum__Enum key))
    IL2CPP_REGISTER_METHOD(0x019E5460, void, EnsureListMatchesEnum, (app::EnumDictionary_2_System_Int32Enum_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E4530, void, ctor, (app::EnumDictionary_2_System_Int32Enum_System_Object_ * this_ptr))
} // namespace app::classes::EnumDictionary_2_System_Int32Enum_System_Object_
