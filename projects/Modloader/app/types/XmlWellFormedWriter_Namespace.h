#pragma once
#include <Modloader/app/structs/XmlWellFormedWriter_Namespace.h>
#include <Modloader/app/structs/XmlWellFormedWriter_Namespace__Array.h>
#include <Modloader/app/structs/XmlWellFormedWriter_Namespace__Boxed.h>
#include <Modloader/app/structs/XmlWellFormedWriter_Namespace__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlWellFormedWriter_Namespace {
        inline app::XmlWellFormedWriter_Namespace__Class** type_info() {
            static app::XmlWellFormedWriter_Namespace__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlWellFormedWriter_Namespace__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlWellFormedWriter_Namespace__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlWellFormedWriter_Namespace__Class>(type_info(), "System.Xml", "XmlWellFormedWriter", "Namespace");
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
        inline app::XmlWellFormedWriter_Namespace__Array* create_array(const std::vector<app::XmlWellFormedWriter_Namespace>& items) {
            return il2cpp::array_new<app::XmlWellFormedWriter_Namespace__Array>(get_class(), items);
        }
    } // namespace XmlWellFormedWriter_Namespace
} // namespace app::classes::types
