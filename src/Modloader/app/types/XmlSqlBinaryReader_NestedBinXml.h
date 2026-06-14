#pragma once
#include <Modloader/app/structs/XmlSqlBinaryReader_NestedBinXml.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_NestedBinXml__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSqlBinaryReader_NestedBinXml {
        inline app::XmlSqlBinaryReader_NestedBinXml__Class** type_info() {
            static app::XmlSqlBinaryReader_NestedBinXml__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSqlBinaryReader_NestedBinXml__Class**)(modloader::win::memory::resolve_rva(0x0476E390));
            }
            return cache;
        }
        inline app::XmlSqlBinaryReader_NestedBinXml__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSqlBinaryReader_NestedBinXml__Class>(type_info(), "System.Xml", "XmlSqlBinaryReader", "NestedBinXml");
        }
        inline app::XmlSqlBinaryReader_NestedBinXml* create() {
            return il2cpp::create_object<app::XmlSqlBinaryReader_NestedBinXml>(get_class());
        }
    } // namespace XmlSqlBinaryReader_NestedBinXml
} // namespace app::classes::types
