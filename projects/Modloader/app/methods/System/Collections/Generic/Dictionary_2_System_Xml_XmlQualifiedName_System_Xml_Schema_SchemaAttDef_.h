#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_.h>
#include <Modloader/app/structs/Dictionary_2_TKe_TValu_ValueCollectio_Syste_Xm_XmlQualifiedNam_Syste_Xm_Schem_SchemaAttDe_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_System_Xml_XmlQualifiedNam_Syste_Xm_Schem_SchemaAttDe_.h>
#include <Modloader/app/structs/SchemaAttDef.h>
#include <Modloader/app/structs/XmlQualifiedName.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ {
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ * this_ptr, app::XmlQualifiedName* key, app::SchemaAttDef* value))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ * this_ptr, app::XmlQualifiedName* key))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ * this_ptr, app::XmlQualifiedName* key, app::SchemaAttDef** value))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_*, get_Values, (app::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_, GetEnumerator, (app::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaAttDef_
