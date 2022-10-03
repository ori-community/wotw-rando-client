#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlWellFormedWriter_Namespace {
        namespace {
            app::XmlWellFormedWriter_Namespace__Class* type_info_ref = nullptr;
        }
        app::XmlWellFormedWriter_Namespace__Class** type_info = &type_info_ref;
        inline app::XmlWellFormedWriter_Namespace__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlWellFormedWriter_Namespace__Class>(type_info, "System.Xml", "XmlWellFormedWriter", "Namespace");
        }
        inline app::XmlWellFormedWriter_Namespace* create() {
            return il2cpp::create_object<app::XmlWellFormedWriter_Namespace>(get_class());
        }
        inline app::XmlWellFormedWriter_Namespace__Boxed* box(app::XmlWellFormedWriter_Namespace value) {
            return il2cpp::box_value<app::XmlWellFormedWriter_Namespace__Boxed>(get_class(), value);
        }
        inline app::XmlWellFormedWriter_Namespace__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlWellFormedWriter_Namespace__Array>(get_class(), size);
        }
    } // namespace XmlWellFormedWriter_Namespace
} // namespace app::classes::types
