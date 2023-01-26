#pragma once
#include <Modloader/app/structs/GameObjectFilter.h>
#include <Modloader/app/structs/GameObjectFilter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameObjectFilter {
        inline app::GameObjectFilter__Class** type_info() {
            static app::GameObjectFilter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameObjectFilter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameObjectFilter__Class* get_class() {
            return il2cpp::get_class<app::GameObjectFilter__Class>(type_info(), "", "GameObjectFilter");
        }
        inline app::GameObjectFilter* create() {
            return il2cpp::create_object<app::GameObjectFilter>(get_class());
        }
    } // namespace GameObjectFilter
} // namespace app::classes::types
