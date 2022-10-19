#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSqlBinaryReader_ElemInfo__Array {
        inline app::XmlSqlBinaryReader_ElemInfo__Array__Class** type_info = (app::XmlSqlBinaryReader_ElemInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0471DB48));
        inline app::XmlSqlBinaryReader_ElemInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlSqlBinaryReader_ElemInfo__Array__Class>(type_info, "System.Xml", "XmlSqlBinaryReader+ElemInfo[]");
        }
        inline app::XmlSqlBinaryReader_ElemInfo__Array* create() {
            return il2cpp::create_object<app::XmlSqlBinaryReader_ElemInfo__Array>(get_class());
        }
    } // namespace XmlSqlBinaryReader_ElemInfo__Array
} // namespace app::classes::types
