#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSqlBinaryReader_ScanState__Enum {
        namespace {
            app::XmlSqlBinaryReader_ScanState__Enum__Class* type_info_ref = nullptr;
        }
        app::XmlSqlBinaryReader_ScanState__Enum__Class** type_info = &type_info_ref;
        inline app::XmlSqlBinaryReader_ScanState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSqlBinaryReader_ScanState__Enum__Class>(type_info, "System.Xml", "XmlSqlBinaryReader", "ScanState");
        }
        inline app::XmlSqlBinaryReader_ScanState__Enum* create() {
            return il2cpp::create_object<app::XmlSqlBinaryReader_ScanState__Enum>(get_class());
        }
    } // namespace XmlSqlBinaryReader_ScanState__Enum
} // namespace app::classes::types
