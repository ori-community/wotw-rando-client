#pragma once
#include <Modloader/app/structs/XmlTextWriter_TagInfo.h>
#include <Modloader/app/structs/XmlTextWriter_TagInfo__Array.h>
#include <Modloader/app/structs/XmlTextWriter_TagInfo__Boxed.h>
#include <Modloader/app/structs/XmlTextWriter_TagInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTextWriter_TagInfo {
        inline app::XmlTextWriter_TagInfo__Class** type_info() {
            static app::XmlTextWriter_TagInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlTextWriter_TagInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlTextWriter_TagInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlTextWriter_TagInfo__Class>(type_info(), "System.Xml", "XmlTextWriter", "TagInfo");
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
