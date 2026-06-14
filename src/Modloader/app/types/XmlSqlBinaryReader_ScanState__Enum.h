#pragma once
#include <Modloader/app/structs/XmlSqlBinaryReader_ScanState__Enum.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_ScanState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSqlBinaryReader_ScanState__Enum {
        inline app::XmlSqlBinaryReader_ScanState__Enum__Class** type_info() {
            static app::XmlSqlBinaryReader_ScanState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlSqlBinaryReader_ScanState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlSqlBinaryReader_ScanState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSqlBinaryReader_ScanState__Enum__Class>(type_info(), "System.Xml", "XmlSqlBinaryReader", "ScanState");
        }
        inline app::XmlSqlBinaryReader_ScanState__Enum* create() {
            return il2cpp::create_object<app::XmlSqlBinaryReader_ScanState__Enum>(get_class());
        }
    } // namespace XmlSqlBinaryReader_ScanState__Enum
} // namespace app::classes::types
