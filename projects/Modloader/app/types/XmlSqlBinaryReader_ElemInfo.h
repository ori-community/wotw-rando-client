#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_ElemInfo__Class.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_ElemInfo.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_ElemInfo__Boxed.h>
#include <Modloader/app/structs/XmlSqlBinaryReader_ElemInfo__Array.h>

namespace app::classes::types {
    namespace XmlSqlBinaryReader_ElemInfo {
        namespace {
            inline app::XmlSqlBinaryReader_ElemInfo__Class* type_info_ref = nullptr;
        }
        inline app::XmlSqlBinaryReader_ElemInfo__Class** type_info = &type_info_ref;
        inline app::XmlSqlBinaryReader_ElemInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSqlBinaryReader_ElemInfo__Class>(type_info, "System.Xml", "XmlSqlBinaryReader", "ElemInfo");
        }
        inline app::XmlSqlBinaryReader_ElemInfo* create() {
            return il2cpp::create_object<app::XmlSqlBinaryReader_ElemInfo>(get_class());
        }
        inline app::XmlSqlBinaryReader_ElemInfo__Boxed* box(app::XmlSqlBinaryReader_ElemInfo value) {
            return il2cpp::box_value<app::XmlSqlBinaryReader_ElemInfo__Boxed>(get_class(), value);
        }
        inline app::XmlSqlBinaryReader_ElemInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlSqlBinaryReader_ElemInfo__Array>(get_class(), size);
        }
        inline app::XmlSqlBinaryReader_ElemInfo__Array* create_array(const std::vector<app::XmlSqlBinaryReader_ElemInfo>& items) {
            return il2cpp::array_new<app::XmlSqlBinaryReader_ElemInfo__Array>(get_class(), items);
        }
    } // namespace XmlSqlBinaryReader_ElemInfo
} // namespace app::classes::types
