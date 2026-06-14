#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaObject.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_* this_ptr,
        app::XmlQualifiedName* key,
        app::XmlSchemaObject* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_* this_ptr,
        app::XmlQualifiedName* key,
        app::XmlSchemaObject** value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_* this_ptr,
        app::XmlQualifiedName* key,
        app::XmlSchemaObject* value
    )
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, app::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BD3EC0,
        bool,
        Remove,
        app::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_* this_ptr,
        app::XmlQualifiedName* key
    )
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, app::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BA5090,
        bool,
        ContainsKey,
        app::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_* this_ptr,
        app::XmlQualifiedName* key
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_XmlSchemaObject_
