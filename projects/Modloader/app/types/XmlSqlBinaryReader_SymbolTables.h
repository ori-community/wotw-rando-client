#pragma once
#include <Modloader/app/structs/XmlSqlBinaryReader_SymbolTables.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_SymbolTables__Boxed.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_SymbolTables__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSqlBinaryReader_SymbolTables {
        inline app::XmlSqlBinaryReader_SymbolTables__Class** type_info() {
            static app::XmlSqlBinaryReader_SymbolTables__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlSqlBinaryReader_SymbolTables__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlSqlBinaryReader_SymbolTables__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSqlBinaryReader_SymbolTables__Class>(type_info(), "System.Xml", "XmlSqlBinaryReader", "SymbolTables");
        }
        inline app::XmlSqlBinaryReader_SymbolTables* create() {
            return il2cpp::create_object<app::XmlSqlBinaryReader_SymbolTables>(get_class());
        }
        inline app::XmlSqlBinaryReader_SymbolTables__Boxed* box(app::XmlSqlBinaryReader_SymbolTables value) {
            return il2cpp::box_value<app::XmlSqlBinaryReader_SymbolTables__Boxed>(get_class(), value);
        }
    } // namespace XmlSqlBinaryReader_SymbolTables
} // namespace app::classes::types
