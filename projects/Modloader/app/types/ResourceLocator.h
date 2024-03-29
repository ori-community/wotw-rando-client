#pragma once
#include <Modloader/app/structs/ResourceLocator.h>
#include <Modloader/app/structs/ResourceLocator__Array.h>
#include <Modloader/app/structs/ResourceLocator__Boxed.h>
#include <Modloader/app/structs/ResourceLocator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ResourceLocator {
        inline app::ResourceLocator__Class** type_info() {
            static app::ResourceLocator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ResourceLocator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ResourceLocator__Class* get_class() {
            return il2cpp::get_class<app::ResourceLocator__Class>(type_info(), "System.Resources", "ResourceLocator");
        }
        inline app::ResourceLocator* create() {
            return il2cpp::create_object<app::ResourceLocator>(get_class());
        }
        inline app::ResourceLocator__Boxed* box(app::ResourceLocator value) {
            return il2cpp::box_value<app::ResourceLocator__Boxed>(get_class(), value);
        }
        inline app::ResourceLocator__Array* create_array(int size) {
            return il2cpp::array_new<app::ResourceLocator__Array>(get_class(), size);
        }
        inline app::ResourceLocator__Array* create_array(const std::vector<app::ResourceLocator>& items) {
            return il2cpp::array_new<app::ResourceLocator__Array>(get_class(), items);
        }
    } // namespace ResourceLocator
} // namespace app::classes::types
