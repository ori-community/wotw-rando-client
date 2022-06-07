#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Newtonsoft::Json::Serialization::JsonArrayContract {
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::Type *, get_CollectionItemType, (app::JsonArrayContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFD00, bool, get_IsMultidimensionalArray, (app::JsonArrayContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008A6E90, bool, get_IsArray, (app::JsonArrayContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0186C330, bool, get_ShouldCreateWrapper, (app::JsonArrayContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0186C340, bool, get_CanDeserialize, (app::JsonArrayContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0186C350, void, set_CanDeserialize, (app::JsonArrayContract * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0186C360, app::ObjectConstructor_1_System_Object_ *, get_ParameterizedCreator, (app::JsonArrayContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0065FBA0, app::ObjectConstructor_1_System_Object_ *, get_OverrideCreator, (app::JsonArrayContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0186C430, void, set_OverrideCreator, (app::JsonArrayContract * this_ptr, app::ObjectConstructor_1_System_Object_ * value))
    IL2CPP_REGISTER_METHOD(0x0068A180, bool, get_HasParameterizedCreator, (app::JsonArrayContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00801AD0, void, set_HasParameterizedCreator, (app::JsonArrayContract * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0186C440, bool, get_HasParameterizedCreatorInternal, (app::JsonArrayContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0186C500, void, ctor, (app::JsonArrayContract * this_ptr, app::Type * underlying_type))
    IL2CPP_REGISTER_METHOD(0x0186D460, app::IWrappedCollection *, CreateWrapper, (app::JsonArrayContract * this_ptr, app::Object * list))
    IL2CPP_REGISTER_METHOD(0x0186D920, app::IList *, CreateTemporaryCollection, (app::JsonArrayContract * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0186DBB0, void, StoreFSharpListCreatorIfNecessary, (app::JsonArrayContract * this_ptr, app::Type * underlying_type))
}
