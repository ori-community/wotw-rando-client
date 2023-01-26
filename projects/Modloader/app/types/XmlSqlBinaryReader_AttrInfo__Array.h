#pragma once
#include <Modloader/app/structs/XmlSqlBinaryReader_AttrInfo__Array.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_AttrInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSqlBinaryReader_AttrInfo__Array {
        inline app::XmlSqlBinaryReader_AttrInfo__Array__Class** type_info() {
            static app::XmlSqlBinaryReader_AttrInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSqlBinaryReader_AttrInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04790428));
            }
            return cache;
        }
        inline app::XmlSqlBinaryReader_AttrInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlSqlBinaryReader_AttrInfo__Array__Class>(type_info(), "System.Xml", "XmlSqlBinaryReader+AttrInfo[]");
        }
        inline app::XmlSqlBinaryReader_AttrInfo__Array* create() {
            return il2cpp::create_object<app::XmlSqlBinaryReader_AttrInfo__Array>(get_class());
        }
    } // namespace XmlSqlBinaryReader_AttrInfo__Array
} // namespace app::classes::types
