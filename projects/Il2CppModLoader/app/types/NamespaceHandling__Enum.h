#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NamespaceHandling__Enum {
        namespace {
            app::NamespaceHandling__Enum__Class* type_info_ref = nullptr;
        }
        app::NamespaceHandling__Enum__Class** type_info = &type_info_ref;
        inline app::NamespaceHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::NamespaceHandling__Enum__Class>(type_info, "System.Xml", "NamespaceHandling");
        }
        inline app::NamespaceHandling__Enum* create() {
            return il2cpp::create_object<app::NamespaceHandling__Enum>(get_class());
        }
    } // namespace NamespaceHandling__Enum
} // namespace app::classes::types
