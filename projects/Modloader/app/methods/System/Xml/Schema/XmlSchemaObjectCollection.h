#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlSchemaObjectCollection.h>
#include <Modloader/app/structs/XmlSchemaObject.h>
#include <Modloader/app/structs/XmlSchemaObjectEnumerator.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Xml::Schema::XmlSchemaObjectCollection {
    IL2CPP_REGISTER_METHOD(0x01C9A650, void, ctor, (app::XmlSchemaObjectCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CB68C0, app::XmlSchemaObject*, get_Item, (app::XmlSchemaObjectCollection * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01CB69B0, void, set_Item, (app::XmlSchemaObjectCollection * this_ptr, int32_t index, app::XmlSchemaObject* value))
    IL2CPP_REGISTER_METHOD(0x01CB6A60, app::XmlSchemaObjectEnumerator*, GetEnumerator, (app::XmlSchemaObjectCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CB6BD0, int32_t, Add_1, (app::XmlSchemaObjectCollection * this_ptr, app::XmlSchemaObject* item))
    IL2CPP_REGISTER_METHOD(0x01CB6C70, void, Insert, (app::XmlSchemaObjectCollection * this_ptr, int32_t index, app::XmlSchemaObject* item))
    IL2CPP_REGISTER_METHOD(0x01CB6D20, void, Remove, (app::XmlSchemaObjectCollection * this_ptr, app::XmlSchemaObject* item))
    IL2CPP_REGISTER_METHOD(0x01CB6DC0, void, OnInsert, (app::XmlSchemaObjectCollection * this_ptr, int32_t index, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x01CB6DE0, void, OnSet, (app::XmlSchemaObjectCollection * this_ptr, int32_t index, app::Object* old_value, app::Object* new_value))
    IL2CPP_REGISTER_METHOD(0x01CB6E40, void, OnClear, (app::XmlSchemaObjectCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CB6E60, void, OnRemove, (app::XmlSchemaObjectCollection * this_ptr, int32_t index, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x01CB6E80, app::XmlSchemaObjectCollection*, Clone, (app::XmlSchemaObjectCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CB7000, void, Add_2, (app::XmlSchemaObjectCollection * this_ptr, app::XmlSchemaObjectCollection* coll_to_add))
} // namespace app::classes::System::Xml::Schema::XmlSchemaObjectCollection
