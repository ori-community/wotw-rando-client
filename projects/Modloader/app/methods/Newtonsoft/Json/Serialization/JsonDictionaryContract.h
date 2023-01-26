#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_2_String_String_.h>
#include <Modloader/app/structs/IDictionary.h>
#include <Modloader/app/structs/IWrappedDictionary.h>
#include <Modloader/app/structs/JsonContract.h>
#include <Modloader/app/structs/JsonDictionaryContract.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectConstructor_1_System_Object_.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Newtonsoft::Json::Serialization::JsonDictionaryContract {
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::Func_2_String_String_*, get_DictionaryKeyResolver, (app::JsonDictionaryContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD10, void, set_DictionaryKeyResolver, (app::JsonDictionaryContract * this_ptr, app::Func_2_String_String_* value))
    IL2CPP_REGISTER_METHOD(0x002FBD20, app::Type*, get_DictionaryKeyType, (app::JsonDictionaryContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD40, app::Type*, get_DictionaryValueType, (app::JsonDictionaryContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::JsonContract*, get_KeyContract, (app::JsonDictionaryContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD70, void, set_KeyContract, (app::JsonDictionaryContract * this_ptr, app::JsonContract* value))
    IL2CPP_REGISTER_METHOD(0x00AE6060, bool, get_ShouldCreateWrapper, (app::JsonDictionaryContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0186F970, app::ObjectConstructor_1_System_Object_*, get_ParameterizedCreator, (app::JsonDictionaryContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0065FBC0, app::ObjectConstructor_1_System_Object_*, get_OverrideCreator, (app::JsonDictionaryContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0065FBD0, void, set_OverrideCreator, (app::JsonDictionaryContract * this_ptr, app::ObjectConstructor_1_System_Object_* value))
    IL2CPP_REGISTER_METHOD(0x0068B8C0, bool, get_HasParameterizedCreator, (app::JsonDictionaryContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00757000, void, set_HasParameterizedCreator, (app::JsonDictionaryContract * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0186FA40, bool, get_HasParameterizedCreatorInternal, (app::JsonDictionaryContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0186FB00, void, ctor, (app::JsonDictionaryContract * this_ptr, app::Type* underlying_type))
    IL2CPP_REGISTER_METHOD(0x018706C0, app::IWrappedDictionary*, CreateWrapper, (app::JsonDictionaryContract * this_ptr, app::Object* dictionary))
    IL2CPP_REGISTER_METHOD(0x01870A50, app::IDictionary*, CreateTemporaryDictionary, (app::JsonDictionaryContract * this_ptr))
} // namespace app::classes::Newtonsoft::Json::Serialization::JsonDictionaryContract
