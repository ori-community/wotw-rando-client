#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSqlBinaryReader_NamespaceDecl {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSqlBinaryReader_NamespaceDecl__Class** type_info;
        inline app::XmlSqlBinaryReader_NamespaceDecl__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSqlBinaryReader_NamespaceDecl__Class>(type_info, "System.Xml", "XmlSqlBinaryReader", "NamespaceDecl");
        }
        inline app::XmlSqlBinaryReader_NamespaceDecl* create() {
            return il2cpp::create_object<app::XmlSqlBinaryReader_NamespaceDecl>(get_class());
        }
        inline app::XmlSqlBinaryReader_NamespaceDecl__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlSqlBinaryReader_NamespaceDecl__Array>(get_class(), size);
        }
    } // namespace XmlSqlBinaryReader_NamespaceDecl
} // namespace app::classes::types
