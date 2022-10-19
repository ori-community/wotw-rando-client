#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NamespaceCache {
        namespace {
            inline app::NamespaceCache__Class* type_info_ref = nullptr;
        }
        inline app::NamespaceCache__Class** type_info = &type_info_ref;
        inline app::NamespaceCache__Class* get_class() {
            return il2cpp::get_class<app::NamespaceCache__Class>(type_info, "System.Xml.Linq", "NamespaceCache");
        }
        inline app::NamespaceCache* create() {
            return il2cpp::create_object<app::NamespaceCache>(get_class());
        }
        inline app::NamespaceCache__Boxed* box(app::NamespaceCache value) {
            return il2cpp::box_value<app::NamespaceCache__Boxed>(get_class(), value);
        }
    } // namespace NamespaceCache
} // namespace app::classes::types
