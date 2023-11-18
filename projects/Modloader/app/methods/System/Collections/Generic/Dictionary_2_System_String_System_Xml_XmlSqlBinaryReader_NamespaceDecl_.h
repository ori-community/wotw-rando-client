#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_.h>
#include <Modloader/app/structs/Dictionary_2_TKe_TValu_ValueCollectio_Syste_Strin_Syste_Xm_XmlSqlBinaryReade_NamespaceDec_.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_String_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_NamespaceDecl.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ {
    IL2CPP_REGISTER_METHOD(0x0283AC50, void, ctor, (app::Dictionary_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ * this_ptr, app::IEqualityComparer_1_System_String_* comparer))
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ * this_ptr, app::String* key, app::XmlSqlBinaryReader_NamespaceDecl** value))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_*, get_Values, (app::Dictionary_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ * this_ptr, app::String* key, app::XmlSqlBinaryReader_NamespaceDecl* value))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ * this_ptr, app::String* key, app::XmlSqlBinaryReader_NamespaceDecl* value))
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, (app::Dictionary_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_ * this_ptr, app::String* key))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_System_Xml_XmlSqlBinaryReader_NamespaceDecl_
