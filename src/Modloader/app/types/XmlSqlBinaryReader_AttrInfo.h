#pragma once
#include <Modloader/app/structs/XmlSqlBinaryReader_AttrInfo.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_AttrInfo__Array.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_AttrInfo__Boxed.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_AttrInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSqlBinaryReader_AttrInfo {
        inline app::XmlSqlBinaryReader_AttrInfo__Class** type_info() {
            static app::XmlSqlBinaryReader_AttrInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlSqlBinaryReader_AttrInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlSqlBinaryReader_AttrInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSqlBinaryReader_AttrInfo__Class>(type_info(), "System.Xml", "XmlSqlBinaryReader", "AttrInfo");
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
        inline app::XmlSqlBinaryReader_AttrInfo__Array* create_array(const std::vector<app::XmlSqlBinaryReader_AttrInfo>& items) {
            return il2cpp::array_new<app::XmlSqlBinaryReader_AttrInfo__Array>(get_class(), items);
        }
    } // namespace XmlSqlBinaryReader_AttrInfo
} // namespace app::classes::types
