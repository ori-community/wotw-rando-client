#pragma once
#include <Modloader/app/structs/XmlTextWriter_NamespaceState__Enum.h>
#include <Modloader/app/structs/XmlTextWriter_NamespaceState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTextWriter_NamespaceState__Enum {
        inline app::XmlTextWriter_NamespaceState__Enum__Class** type_info() {
            static app::XmlTextWriter_NamespaceState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlTextWriter_NamespaceState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlTextWriter_NamespaceState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlTextWriter_NamespaceState__Enum__Class>(type_info(), "System.Xml", "XmlTextWriter", "NamespaceState");
        }
        inline app::XmlTextWriter_NamespaceState__Enum* create() {
            return il2cpp::create_object<app::XmlTextWriter_NamespaceState__Enum>(get_class());
        }
    } // namespace XmlTextWriter_NamespaceState__Enum
} // namespace app::classes::types
