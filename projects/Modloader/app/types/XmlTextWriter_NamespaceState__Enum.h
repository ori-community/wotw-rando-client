#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlTextWriter_NamespaceState__Enum {
        namespace {
            inline app::XmlTextWriter_NamespaceState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XmlTextWriter_NamespaceState__Enum__Class** type_info = &type_info_ref;
        inline app::XmlTextWriter_NamespaceState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlTextWriter_NamespaceState__Enum__Class>(type_info, "System.Xml", "XmlTextWriter", "NamespaceState");
        }
        inline app::XmlTextWriter_NamespaceState__Enum* create() {
            return il2cpp::create_object<app::XmlTextWriter_NamespaceState__Enum>(get_class());
        }
    } // namespace XmlTextWriter_NamespaceState__Enum
} // namespace app::classes::types
