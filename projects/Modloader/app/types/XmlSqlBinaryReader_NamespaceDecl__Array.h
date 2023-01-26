#pragma once
#include <Modloader/app/structs/XmlSqlBinaryReader_NamespaceDecl__Array.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_NamespaceDecl__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSqlBinaryReader_NamespaceDecl__Array {
        inline app::XmlSqlBinaryReader_NamespaceDecl__Array__Class** type_info() {
            static app::XmlSqlBinaryReader_NamespaceDecl__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlSqlBinaryReader_NamespaceDecl__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlSqlBinaryReader_NamespaceDecl__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlSqlBinaryReader_NamespaceDecl__Array__Class>(type_info(), "System.Xml", "XmlSqlBinaryReader+NamespaceDecl[]");
        }
        inline app::XmlSqlBinaryReader_NamespaceDecl__Array* create() {
            return il2cpp::create_object<app::XmlSqlBinaryReader_NamespaceDecl__Array>(get_class());
        }
    } // namespace XmlSqlBinaryReader_NamespaceDecl__Array
} // namespace app::classes::types
