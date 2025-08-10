#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XmlSchemaObjectTable_ValuesCollection.h>

namespace app::classes::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection {
    IL2CPP_REGISTER_METHOD(
        0x00CC8D50,
        void,
        ctor,
        app::XmlSchemaObjectTable_ValuesCollection* this_ptr,
        app::List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_* entries,
        int32_t size
    )
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::XmlSchemaObjectTable_ValuesCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CB8410, app::Object*, get_SyncRoot, app::XmlSchemaObjectTable_ValuesCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CB84A0, bool, get_IsSynchronized, app::XmlSchemaObjectTable_ValuesCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CB8530, void, CopyTo, app::XmlSchemaObjectTable_ValuesCollection* this_ptr, app::Array* array, int32_t array_index)
    IL2CPP_REGISTER_METHOD(0x01CB86A0, app::IEnumerator*, GetEnumerator, app::XmlSchemaObjectTable_ValuesCollection* this_ptr)
} // namespace app::classes::System::Xml::Schema::XmlSchemaObjectTable_ValuesCollection
