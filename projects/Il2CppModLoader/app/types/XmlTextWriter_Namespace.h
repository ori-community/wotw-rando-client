#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlTextWriter_Namespace {
        namespace {
            app::XmlTextWriter_Namespace__Class* type_info_ref = nullptr;
        }
        app::XmlTextWriter_Namespace__Class** type_info = &type_info_ref;
        inline app::XmlTextWriter_Namespace__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlTextWriter_Namespace__Class>(type_info, "System.Xml", "XmlTextWriter", "Namespace");
        }
        inline app::XmlTextWriter_Namespace* create() {
            return il2cpp::create_object<app::XmlTextWriter_Namespace>(get_class());
        }
        inline app::XmlTextWriter_Namespace__Boxed* box(app::XmlTextWriter_Namespace value) {
            return il2cpp::box_value<app::XmlTextWriter_Namespace__Boxed>(get_class(), value);
        }
        inline app::XmlTextWriter_Namespace__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlTextWriter_Namespace__Array>(get_class(), size);
        }
        inline app::XmlTextWriter_Namespace__Array* create_array(const std::vector<app::XmlTextWriter_Namespace>& items) {
            return il2cpp::array_new<app::XmlTextWriter_Namespace__Array>(get_class(), items);
        }
    } // namespace XmlTextWriter_Namespace
} // namespace app::classes::types
