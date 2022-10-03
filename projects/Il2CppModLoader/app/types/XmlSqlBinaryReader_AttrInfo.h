#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSqlBinaryReader_AttrInfo {
        namespace {
            app::XmlSqlBinaryReader_AttrInfo__Class* type_info_ref = nullptr;
        }
        app::XmlSqlBinaryReader_AttrInfo__Class** type_info = &type_info_ref;
        inline app::XmlSqlBinaryReader_AttrInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSqlBinaryReader_AttrInfo__Class>(type_info, "System.Xml", "XmlSqlBinaryReader", "AttrInfo");
        }
        inline app::XmlSqlBinaryReader_AttrInfo* create() {
            return il2cpp::create_object<app::XmlSqlBinaryReader_AttrInfo>(get_class());
        }
        inline app::XmlSqlBinaryReader_AttrInfo__Boxed* box(app::XmlSqlBinaryReader_AttrInfo value) {
            return il2cpp::box_value<app::XmlSqlBinaryReader_AttrInfo__Boxed>(get_class(), value);
        }
        inline app::XmlSqlBinaryReader_AttrInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlSqlBinaryReader_AttrInfo__Array>(get_class(), size);
        }
    } // namespace XmlSqlBinaryReader_AttrInfo
} // namespace app::classes::types
