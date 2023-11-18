#pragma once
#include <Modloader/app/structs/NamespaceCache.h>
#include <Modloader/app/structs/NamespaceCache__Boxed.h>
#include <Modloader/app/structs/NamespaceCache__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NamespaceCache {
        inline app::NamespaceCache__Class** type_info() {
            static app::NamespaceCache__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NamespaceCache__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NamespaceCache__Class* get_class() {
            return il2cpp::get_class<app::NamespaceCache__Class>(type_info(), "System.Xml.Linq", "NamespaceCache");
        }
        inline app::NamespaceCache* create() {
            return il2cpp::create_object<app::NamespaceCache>(get_class());
        }
        inline app::NamespaceCache__Boxed* box(app::NamespaceCache value) {
            return il2cpp::box_value<app::NamespaceCache__Boxed>(get_class(), value);
        }
    } // namespace NamespaceCache
} // namespace app::classes::types
