#pragma once
#include <Modloader/app/structs/NamespaceHandling__Enum.h>
#include <Modloader/app/structs/NamespaceHandling__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NamespaceHandling__Enum {
        inline app::NamespaceHandling__Enum__Class** type_info() {
            static app::NamespaceHandling__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NamespaceHandling__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NamespaceHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::NamespaceHandling__Enum__Class>(type_info(), "System.Xml", "NamespaceHandling");
        }
        inline app::NamespaceHandling__Enum* create() {
            return il2cpp::create_object<app::NamespaceHandling__Enum>(get_class());
        }
    } // namespace NamespaceHandling__Enum
} // namespace app::classes::types
