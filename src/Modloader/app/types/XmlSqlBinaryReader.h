#pragma once
#include <Modloader/app/structs/XmlSqlBinaryReader.h>
#include <Modloader/app/structs/XmlSqlBinaryReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSqlBinaryReader {
        inline app::XmlSqlBinaryReader__Class** type_info() {
            static app::XmlSqlBinaryReader__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSqlBinaryReader__Class**)(modloader::win::memory::resolve_rva(0x04755798));
            }
            return cache;
        }
        inline app::XmlSqlBinaryReader__Class* get_class() {
            return il2cpp::get_class<app::XmlSqlBinaryReader__Class>(type_info(), "System.Xml", "XmlSqlBinaryReader");
        }
        inline app::XmlSqlBinaryReader* create() {
            return il2cpp::create_object<app::XmlSqlBinaryReader>(get_class());
        }
    } // namespace XmlSqlBinaryReader
} // namespace app::classes::types
