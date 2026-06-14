#pragma once
#include <Modloader/app/structs/Dictionary_2_TKe_TValu_Entr_Syste_Xm_XmlQualifiedNam_Syste_Xm_Schem_SchemaAttDe___Arr__Cla.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Entry_System_Xm_XmlQualifiedNam_Syste_Xm_Schem_SchemaAttDe___Arra.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Array {
        inline app::Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Array__Class** type_info() {
            static app::Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Array__Class* get_class() {
            return il2cpp::get_class<app::Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Array__Class>(type_info(), "System.Collections.Generic", "Dictionary`2[TKey,TValue]+Entry[System.Xml.XmlQualifiedName,System.Xml.Schema.SchemaAttDef][]");
        }
        inline app::Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Array* create() {
            return il2cpp::create_object<app::Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Array>(get_class());
        }
    } // namespace Dictionary_2_TKey_TValue_Entry_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef___Array
} // namespace app::classes::types
