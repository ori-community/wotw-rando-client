#pragma once
#include <Modloader/app/structs/WandererPatrolBehaviour.h>
#include <Modloader/app/structs/WandererPatrolBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WandererPatrolBehaviour {
        inline app::WandererPatrolBehaviour__Class** type_info() {
            static app::WandererPatrolBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WandererPatrolBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WandererPatrolBehaviour__Class* get_class() {
            return il2cpp::get_class<app::WandererPatrolBehaviour__Class>(type_info(), "Moon", "WandererPatrolBehaviour");
        }
        inline app::WandererPatrolBehaviour* create() {
            return il2cpp::create_object<app::WandererPatrolBehaviour>(get_class());
        }
    } // namespace WandererPatrolBehaviour
} // namespace app::classes::types
