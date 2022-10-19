#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlTextWriter_TagInfo {
        namespace {
            inline app::XmlTextWriter_TagInfo__Class* type_info_ref = nullptr;
        }
        inline app::XmlTextWriter_TagInfo__Class** type_info = &type_info_ref;
        inline app::XmlTextWriter_TagInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlTextWriter_TagInfo__Class>(type_info, "System.Xml", "XmlTextWriter", "TagInfo");
        }
        inline app::XmlTextWriter_TagInfo* create() {
            return il2cpp::create_object<app::XmlTextWriter_TagInfo>(get_class());
        }
        inline app::XmlTextWriter_TagInfo__Boxed* box(app::XmlTextWriter_TagInfo value) {
            return il2cpp::box_value<app::XmlTextWriter_TagInfo__Boxed>(get_class(), value);
        }
        inline app::XmlTextWriter_TagInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlTextWriter_TagInfo__Array>(get_class(), size);
        }
        inline app::XmlTextWriter_TagInfo__Array* create_array(const std::vector<app::XmlTextWriter_TagInfo>& items) {
            return il2cpp::array_new<app::XmlTextWriter_TagInfo__Array>(get_class(), items);
        }
    } // namespace XmlTextWriter_TagInfo
} // namespace app::classes::types
