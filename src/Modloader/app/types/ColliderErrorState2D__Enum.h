#pragma once
#include <Modloader/app/structs/ColliderErrorState2D__Enum.h>
#include <Modloader/app/structs/ColliderErrorState2D__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColliderErrorState2D__Enum {
        inline app::ColliderErrorState2D__Enum__Class** type_info() {
            static app::ColliderErrorState2D__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColliderErrorState2D__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColliderErrorState2D__Enum__Class* get_class() {
            return il2cpp::get_class<app::ColliderErrorState2D__Enum__Class>(type_info(), "UnityEngine", "ColliderErrorState2D");
        }
        inline app::ColliderErrorState2D__Enum* create() {
            return il2cpp::create_object<app::ColliderErrorState2D__Enum>(get_class());
        }
    } // namespace ColliderErrorState2D__Enum
} // namespace app::classes::types
