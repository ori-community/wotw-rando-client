#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSqlBinaryReader_NestedBinXml {
        inline app::XmlSqlBinaryReader_NestedBinXml__Class** type_info = (app::XmlSqlBinaryReader_NestedBinXml__Class**)(modloader::win::memory::resolve_rva(0x0476E390));
        inline app::XmlSqlBinaryReader_NestedBinXml__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSqlBinaryReader_NestedBinXml__Class>(type_info, "System.Xml", "XmlSqlBinaryReader", "NestedBinXml");
        }
        inline app::XmlSqlBinaryReader_NestedBinXml* create() {
            return il2cpp::create_object<app::XmlSqlBinaryReader_NestedBinXml>(get_class());
        }
    } // namespace XmlSqlBinaryReader_NestedBinXml
} // namespace app::classes::types
