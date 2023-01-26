#pragma once
#include <Modloader/app/structs/SandWormDashBehaviourNew.h>
#include <Modloader/app/structs/SandWormDashBehaviourNew__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormDashBehaviourNew {
        inline app::SandWormDashBehaviourNew__Class** type_info() {
            static app::SandWormDashBehaviourNew__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormDashBehaviourNew__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormDashBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::SandWormDashBehaviourNew__Class>(type_info(), "Moon", "SandWormDashBehaviourNew");
        }
        inline app::SandWormDashBehaviourNew* create() {
            return il2cpp::create_object<app::SandWormDashBehaviourNew>(get_class());
        }
    } // namespace SandWormDashBehaviourNew
} // namespace app::classes::types
