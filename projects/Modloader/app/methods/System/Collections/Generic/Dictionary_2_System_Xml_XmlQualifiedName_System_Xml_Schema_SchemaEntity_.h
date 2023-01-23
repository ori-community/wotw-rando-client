#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/SchemaEntity.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ {
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ * this_ptr, app::XmlQualifiedName* key))
    IL2CPP_REGISTER_METHODINFO(0x04768288, Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity__ContainsKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ * this_ptr, app::XmlQualifiedName* key, app::SchemaEntity* value))
    IL2CPP_REGISTER_METHODINFO(0x04706F18, Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ * this_ptr, app::XmlQualifiedName* key, app::SchemaEntity** value))
    IL2CPP_REGISTER_METHODINFO(0x04718728, Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04793700, Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_*, get_Values, (app::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473FF40, Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity__get_Values__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Xml_XmlQualifiedName_System_Xml_Schema_SchemaEntity_
