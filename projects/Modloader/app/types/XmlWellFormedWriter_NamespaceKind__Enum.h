#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlWellFormedWriter_NamespaceKind__Enum {
        namespace {
            inline app::XmlWellFormedWriter_NamespaceKind__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XmlWellFormedWriter_NamespaceKind__Enum__Class** type_info = &type_info_ref;
        inline app::XmlWellFormedWriter_NamespaceKind__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlWellFormedWriter_NamespaceKind__Enum__Class>(type_info, "System.Xml", "XmlWellFormedWriter", "NamespaceKind");
        }
        inline app::XmlWellFormedWriter_NamespaceKind__Enum* create() {
            return il2cpp::create_object<app::XmlWellFormedWriter_NamespaceKind__Enum>(get_class());
        }
    } // namespace XmlWellFormedWriter_NamespaceKind__Enum
} // namespace app::classes::types
