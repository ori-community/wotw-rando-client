#pragma once
#include <Modloader/app/structs/HasComponentGameObjectFilter.h>
#include <Modloader/app/structs/HasComponentGameObjectFilter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HasComponentGameObjectFilter {
        inline app::HasComponentGameObjectFilter__Class** type_info() {
            static app::HasComponentGameObjectFilter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HasComponentGameObjectFilter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HasComponentGameObjectFilter__Class* get_class() {
            return il2cpp::get_class<app::HasComponentGameObjectFilter__Class>(type_info(), "", "HasComponentGameObjectFilter");
        }
        inline app::HasComponentGameObjectFilter* create() {
            return il2cpp::create_object<app::HasComponentGameObjectFilter>(get_class());
        }
    } // namespace HasComponentGameObjectFilter
} // namespace app::classes::types
