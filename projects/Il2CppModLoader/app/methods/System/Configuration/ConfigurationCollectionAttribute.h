#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Configuration::ConfigurationCollectionAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ConfigurationCollectionAttribute * this_ptr, app::Type* item_type))
    IL2CPP_REGISTER_METHOD(0x031BB840, void, set_AddItemName, (app::ConfigurationCollectionAttribute * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x04791D28, ConfigurationCollectionAttribute_set_AddItemName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BB870, void, set_ClearItemsName, (app::ConfigurationCollectionAttribute * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x04756E50, ConfigurationCollectionAttribute_set_ClearItemsName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BB8A0, void, set_CollectionType, (app::ConfigurationCollectionAttribute * this_ptr, app::ConfigurationElementCollectionType__Enum value))
    IL2CPP_REGISTER_METHODINFO(0x0471E630, ConfigurationCollectionAttribute_set_CollectionType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031BB8D0, void, set_RemoveItemName, (app::ConfigurationCollectionAttribute * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x04702798, ConfigurationCollectionAttribute_set_RemoveItemName__MethodInfo)
} // namespace app::classes::System::Configuration::ConfigurationCollectionAttribute
