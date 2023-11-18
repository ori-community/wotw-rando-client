#pragma once
#include <Modloader/app/structs/ResourceLocator__Array.h>
#include <Modloader/app/structs/ResourceLocator__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ResourceLocator__Array {
        inline app::ResourceLocator__Array__Class** type_info() {
            static app::ResourceLocator__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ResourceLocator__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ResourceLocator__Array__Class* get_class() {
            return il2cpp::get_class<app::ResourceLocator__Array__Class>(type_info(), "System.Resources", "ResourceLocator[]");
        }
        inline app::ResourceLocator__Array* create() {
            return il2cpp::create_object<app::ResourceLocator__Array>(get_class());
        }
    } // namespace ResourceLocator__Array
} // namespace app::classes::types
