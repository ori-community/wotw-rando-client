#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSqlBinaryReader_SymbolTables {
        namespace {
            app::XmlSqlBinaryReader_SymbolTables__Class* type_info_ref = nullptr;
        }
        app::XmlSqlBinaryReader_SymbolTables__Class** type_info = &type_info_ref;
        inline app::XmlSqlBinaryReader_SymbolTables__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSqlBinaryReader_SymbolTables__Class>(type_info, "System.Xml", "XmlSqlBinaryReader", "SymbolTables");
        }
        inline app::XmlSqlBinaryReader_SymbolTables* create() {
            return il2cpp::create_object<app::XmlSqlBinaryReader_SymbolTables>(get_class());
        }
        inline app::XmlSqlBinaryReader_SymbolTables__Boxed* box(app::XmlSqlBinaryReader_SymbolTables value) {
            return il2cpp::box_value<app::XmlSqlBinaryReader_SymbolTables__Boxed>(get_class(), value);
        }
    } // namespace XmlSqlBinaryReader_SymbolTables
} // namespace app::classes::types
