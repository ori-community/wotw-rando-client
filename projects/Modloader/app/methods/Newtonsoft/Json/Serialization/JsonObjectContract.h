#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MemberSerialization__Enum.h>
#include <Modloader/app/structs/JsonObjectContract.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_Required_.h>
#include <Modloader/app/structs/Nullable_1_Newtonsoft_Json_NullValueHandling_.h>
#include <Modloader/app/structs/JsonPropertyCollection.h>
#include <Modloader/app/structs/ObjectConstructor_1_System_Object_.h>
#include <Modloader/app/structs/ExtensionDataSetter.h>
#include <Modloader/app/structs/ExtensionDataGetter.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Func_2_String_String_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Newtonsoft::Json::Serialization::JsonObjectContract {
    IL2CPP_REGISTER_METHOD(0x008519C0, app::MemberSerialization__Enum, get_MemberSerialization, (app::JsonObjectContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008519D0, void, set_MemberSerialization, (app::JsonObjectContract * this_ptr, app::MemberSerialization__Enum value))
    IL2CPP_REGISTER_METHOD(0x01872020, app::Nullable_1_Newtonsoft_Json_Required_, get_ItemRequired, (app::JsonObjectContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01872030, void, set_ItemRequired, (app::JsonObjectContract * this_ptr, app::Nullable_1_Newtonsoft_Json_Required_ value))
    IL2CPP_REGISTER_METHOD(0x01872040, app::Nullable_1_Newtonsoft_Json_NullValueHandling_, get_ItemNullValueHandling, (app::JsonObjectContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01872050, void, set_ItemNullValueHandling, (app::JsonObjectContract * this_ptr, app::Nullable_1_Newtonsoft_Json_NullValueHandling_ value))
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::JsonPropertyCollection*, get_Properties, (app::JsonObjectContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01872060, app::JsonPropertyCollection*, get_CreatorParameters, (app::JsonObjectContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A63A0, app::ObjectConstructor_1_System_Object_*, get_OverrideCreator, (app::JsonObjectContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006A63B0, void, set_OverrideCreator, (app::JsonObjectContract * this_ptr, app::ObjectConstructor_1_System_Object_* value))
    IL2CPP_REGISTER_METHOD(0x0065FBA0, app::ObjectConstructor_1_System_Object_*, get_ParameterizedCreator, (app::JsonObjectContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0065FBB0, void, set_ParameterizedCreator, (app::JsonObjectContract * this_ptr, app::ObjectConstructor_1_System_Object_* value))
    IL2CPP_REGISTER_METHOD(0x00660430, app::ExtensionDataSetter*, get_ExtensionDataSetter, (app::JsonObjectContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00660440, void, set_ExtensionDataSetter, (app::JsonObjectContract * this_ptr, app::ExtensionDataSetter* value))
    IL2CPP_REGISTER_METHOD(0x005B0220, app::ExtensionDataGetter*, get_ExtensionDataGetter, (app::JsonObjectContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A2A740, void, set_ExtensionDataGetter, (app::JsonObjectContract * this_ptr, app::ExtensionDataGetter* value))
    IL2CPP_REGISTER_METHOD(0x018721D0, void, set_ExtensionDataValueType, (app::JsonObjectContract * this_ptr, app::Type* value))
    IL2CPP_REGISTER_METHOD(0x00418200, app::Func_2_String_String_*, get_ExtensionDataNameResolver, (app::JsonObjectContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008760C0, void, set_ExtensionDataNameResolver, (app::JsonObjectContract * this_ptr, app::Func_2_String_String_* value))
    IL2CPP_REGISTER_METHOD(0x018722E0, bool, get_HasRequiredOrDefaultValueProperties, (app::JsonObjectContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018725D0, void, ctor, (app::JsonObjectContract * this_ptr, app::Type* underlying_type))
    IL2CPP_REGISTER_METHOD(0x01872740, app::Object*, GetUninitializedObject, (app::JsonObjectContract * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471CFB8, JsonObjectContract_GetUninitializedObject__MethodInfo)
} // namespace app::classes::Newtonsoft::Json::Serialization::JsonObjectContract
