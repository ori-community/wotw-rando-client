#pragma once
#include <Modloader/app/structs/SkeetoPatrolBehaviour.h>
#include <Modloader/app/structs/SkeetoPatrolBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoPatrolBehaviour {
        inline app::SkeetoPatrolBehaviour__Class** type_info() {
            static app::SkeetoPatrolBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkeetoPatrolBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkeetoPatrolBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SkeetoPatrolBehaviour__Class>(type_info(), "Moon", "SkeetoPatrolBehaviour");
        }
        inline app::SkeetoPatrolBehaviour* create() {
            return il2cpp::create_object<app::SkeetoPatrolBehaviour>(get_class());
        }
    } // namespace SkeetoPatrolBehaviour
} // namespace app::classes::types
