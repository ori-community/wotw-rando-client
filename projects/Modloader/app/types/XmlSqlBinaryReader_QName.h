#pragma once
#include <Modloader/app/structs/XmlSqlBinaryReader_QName.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_QName__Array.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_QName__Boxed.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_QName__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSqlBinaryReader_QName {
        inline app::XmlSqlBinaryReader_QName__Class** type_info() {
            static app::XmlSqlBinaryReader_QName__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSqlBinaryReader_QName__Class**)(modloader::win::memory::resolve_rva(0x0474B948));
            }
            return cache;
        }
        inline app::XmlSqlBinaryReader_QName__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSqlBinaryReader_QName__Class>(type_info(), "System.Xml", "XmlSqlBinaryReader", "QName");
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
        inline app::XmlSqlBinaryReader_QName__Array* create_array(const std::vector<app::XmlSqlBinaryReader_QName>& items) {
            return il2cpp::array_new<app::XmlSqlBinaryReader_QName__Array>(get_class(), items);
        }
    } // namespace XmlSqlBinaryReader_QName
} // namespace app::classes::types
