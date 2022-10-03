#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSqlBinaryReader_AttrInfo__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSqlBinaryReader_AttrInfo__Array__Class** type_info;
        inline app::XmlSqlBinaryReader_AttrInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlSqlBinaryReader_AttrInfo__Array__Class>(type_info, "System.Xml", "XmlSqlBinaryReader+AttrInfo[]");
        }
        inline app::XmlSqlBinaryReader_AttrInfo__Array* create() {
            return il2cpp::create_object<app::XmlSqlBinaryReader_AttrInfo__Array>(get_class());
        }
    } // namespace XmlSqlBinaryReader_AttrInfo__Array
} // namespace app::classes::types
