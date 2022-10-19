#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlIncludeAttribute {
        namespace {
            inline app::XmlIncludeAttribute__Class* type_info_ref = nullptr;
        }
        inline app::XmlIncludeAttribute__Class** type_info = &type_info_ref;
        inline app::XmlIncludeAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlIncludeAttribute__Class>(type_info, "System.Xml.Serialization", "XmlIncludeAttribute");
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
