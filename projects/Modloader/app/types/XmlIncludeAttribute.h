#pragma once
#include <Modloader/app/structs/XmlIncludeAttribute.h>
#include <Modloader/app/structs/XmlIncludeAttribute__Array.h>
#include <Modloader/app/structs/XmlIncludeAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlIncludeAttribute {
        inline app::XmlIncludeAttribute__Class** type_info() {
            static app::XmlIncludeAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlIncludeAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlIncludeAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlIncludeAttribute__Class>(type_info(), "System.Xml.Serialization", "XmlIncludeAttribute");
        }
        inline app::XmlIncludeAttribute* create() {
            return il2cpp::create_object<app::XmlIncludeAttribute>(get_class());
        }
        inline app::XmlIncludeAttribute__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlIncludeAttribute__Array>(get_class(), size);
        }
        inline app::XmlIncludeAttribute__Array* create_array(const std::vector<app::XmlIncludeAttribute*>& items) {
            return il2cpp::array_new<app::XmlIncludeAttribute__Array>(get_class(), items);
        }
    } // namespace XmlIncludeAttribute
} // namespace app::classes::types
