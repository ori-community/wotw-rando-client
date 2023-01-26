#pragma once
#include <Modloader/app/structs/NamespaceResolver.h>
#include <Modloader/app/structs/NamespaceResolver__Boxed.h>
#include <Modloader/app/structs/NamespaceResolver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NamespaceResolver {
        inline app::NamespaceResolver__Class** type_info() {
            static app::NamespaceResolver__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NamespaceResolver__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NamespaceResolver__Class* get_class() {
            return il2cpp::get_class<app::NamespaceResolver__Class>(type_info(), "System.Xml.Linq", "NamespaceResolver");
        }
        inline app::NamespaceResolver* create() {
            return il2cpp::create_object<app::NamespaceResolver>(get_class());
        }
        inline app::NamespaceResolver__Boxed* box(app::NamespaceResolver value) {
            return il2cpp::box_value<app::NamespaceResolver__Boxed>(get_class(), value);
        }
    } // namespace NamespaceResolver
} // namespace app::classes::types
