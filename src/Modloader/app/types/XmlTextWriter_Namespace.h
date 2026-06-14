#pragma once
#include <Modloader/app/structs/XmlTextWriter_Namespace.h>
#include <Modloader/app/structs/XmlTextWriter_Namespace__Array.h>
#include <Modloader/app/structs/XmlTextWriter_Namespace__Boxed.h>
#include <Modloader/app/structs/XmlTextWriter_Namespace__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTextWriter_Namespace {
        inline app::XmlTextWriter_Namespace__Class** type_info() {
            static app::XmlTextWriter_Namespace__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlTextWriter_Namespace__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlTextWriter_Namespace__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlTextWriter_Namespace__Class>(type_info(), "System.Xml", "XmlTextWriter", "Namespace");
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
