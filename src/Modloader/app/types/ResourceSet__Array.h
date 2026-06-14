#pragma once
#include <Modloader/app/structs/ResourceSet__Array.h>
#include <Modloader/app/structs/ResourceSet__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ResourceSet__Array {
        inline app::ResourceSet__Array__Class** type_info() {
            static app::ResourceSet__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ResourceSet__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ResourceSet__Array__Class* get_class() {
            return il2cpp::get_class<app::ResourceSet__Array__Class>(type_info(), "System.Resources", "ResourceSet[]");
        }
        inline app::ResourceSet__Array* create() {
            return il2cpp::create_object<app::ResourceSet__Array>(get_class());
        }
    } // namespace ResourceSet__Array
} // namespace app::classes::types
