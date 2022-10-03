#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSqlBinaryReader_QName {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSqlBinaryReader_QName__Class** type_info;
        inline app::XmlSqlBinaryReader_QName__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSqlBinaryReader_QName__Class>(type_info, "System.Xml", "XmlSqlBinaryReader", "QName");
        }
        inline app::XmlSqlBinaryReader_QName* create() {
            return il2cpp::create_object<app::XmlSqlBinaryReader_QName>(get_class());
        }
        inline app::XmlSqlBinaryReader_QName__Boxed* box(app::XmlSqlBinaryReader_QName value) {
            return il2cpp::box_value<app::XmlSqlBinaryReader_QName__Boxed>(get_class(), value);
        }
        inline app::XmlSqlBinaryReader_QName__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlSqlBinaryReader_QName__Array>(get_class(), size);
        }
    } // namespace XmlSqlBinaryReader_QName
} // namespace app::classes::types
