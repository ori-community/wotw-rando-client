#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSqlBinaryReader_NestedBinXml {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSqlBinaryReader_NestedBinXml__Class** type_info;
        inline app::XmlSqlBinaryReader_NestedBinXml__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSqlBinaryReader_NestedBinXml__Class>(type_info, "System.Xml", "XmlSqlBinaryReader", "NestedBinXml");
        }
        inline app::XmlSqlBinaryReader_NestedBinXml* create() {
            return il2cpp::create_object<app::XmlSqlBinaryReader_NestedBinXml>(get_class());
        }
    } // namespace XmlSqlBinaryReader_NestedBinXml
} // namespace app::classes::types
