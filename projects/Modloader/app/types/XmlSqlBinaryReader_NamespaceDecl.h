#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_NamespaceDecl__Class.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_NamespaceDecl.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_NamespaceDecl__Array.h>

namespace app::classes::types {
    namespace XmlSqlBinaryReader_NamespaceDecl {
        inline app::XmlSqlBinaryReader_NamespaceDecl__Class** type_info = (app::XmlSqlBinaryReader_NamespaceDecl__Class**)(modloader::win::memory::resolve_rva(0x047412D0));
        inline app::XmlSqlBinaryReader_NamespaceDecl__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSqlBinaryReader_NamespaceDecl__Class>(type_info, "System.Xml", "XmlSqlBinaryReader", "NamespaceDecl");
        }
        inline app::XmlSqlBinaryReader_NamespaceDecl* create() {
            return il2cpp::create_object<app::XmlSqlBinaryReader_NamespaceDecl>(get_class());
        }
        inline app::XmlSqlBinaryReader_NamespaceDecl__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlSqlBinaryReader_NamespaceDecl__Array>(get_class(), size);
        }
        inline app::XmlSqlBinaryReader_NamespaceDecl__Array* create_array(const std::vector<app::XmlSqlBinaryReader_NamespaceDecl*>& items) {
            return il2cpp::array_new<app::XmlSqlBinaryReader_NamespaceDecl__Array>(get_class(), items);
        }
    } // namespace XmlSqlBinaryReader_NamespaceDecl
} // namespace app::classes::types
