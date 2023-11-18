#pragma once
#include <Modloader/app/structs/CollisionFilter.h>
#include <Modloader/app/structs/CollisionFilter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CollisionFilter {
        inline app::CollisionFilter__Class** type_info() {
            static app::CollisionFilter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CollisionFilter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CollisionFilter__Class* get_class() {
            return il2cpp::get_class<app::CollisionFilter__Class>(type_info(), "", "CollisionFilter");
        }
        inline app::CollisionFilter* create() {
            return il2cpp::create_object<app::CollisionFilter>(get_class());
        }
    } // namespace CollisionFilter
} // namespace app::classes::types
