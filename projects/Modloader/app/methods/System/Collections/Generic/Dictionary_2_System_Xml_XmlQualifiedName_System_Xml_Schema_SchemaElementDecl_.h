#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_.h>
#include <Modloader/app/structs/Dictionary_2_TKe_TValu_Enumerato_Syste_Xm_XmlQualifiedNam_Syste_Xm_Schem_SchemaElementDec_.h>
#include <Modloader/app/structs/Dictionary_2_TKe_TValu_ValueCollectio_Syste_Xm_XmlQualifiedNa_Syst_X_Sche_SchemaElementDe_.h>
#include <Modloader/app/structs/SchemaElementDecl.h>
#include <Modloader/app/structs/XmlQualifiedName.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_ {
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_* this_ptr,
        app::XmlQualifiedName* key,
        app::SchemaElementDecl** value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_* this_ptr,
        app::XmlQualifiedName* key,
        app::SchemaElementDecl* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BD3EC0,
        bool,
        Remove,
        app::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_* this_ptr,
        app::XmlQualifiedName* key
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BA5400,
        app::Dictionary_2_TKey_TValue_Enumerator_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_,
        GetEnumerator,
        app::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA5090,
        bool,
        ContainsKey,
        app::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_* this_ptr,
        app::XmlQualifiedName* key
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B3E0,
        app::Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_*,
        get_Values,
        app::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaElementDecl_
