#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfigurationCollectionAttribute.h>
#include <Modloader/app/structs/ConfigurationElementCollectionType__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Configuration::ConfigurationCollectionAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ConfigurationCollectionAttribute * this_ptr, app::Type* item_type))
    IL2CPP_REGISTER_METHOD(0x031BB840, void, set_AddItemName, (app::ConfigurationCollectionAttribute * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x031BB870, void, set_ClearItemsName, (app::ConfigurationCollectionAttribute * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x031BB8A0, void, set_CollectionType, (app::ConfigurationCollectionAttribute * this_ptr, app::ConfigurationElementCollectionType__Enum value))
    IL2CPP_REGISTER_METHOD(0x031BB8D0, void, set_RemoveItemName, (app::ConfigurationCollectionAttribute * this_ptr, app::String* value))
} // namespace app::classes::System::Configuration::ConfigurationCollectionAttribute
