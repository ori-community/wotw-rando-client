#pragma once
#include <Modloader/app/structs/SandWormShootingBehaviourNew.h>
#include <Modloader/app/structs/SandWormShootingBehaviourNew__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormShootingBehaviourNew {
        inline app::SandWormShootingBehaviourNew__Class** type_info() {
            static app::SandWormShootingBehaviourNew__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormShootingBehaviourNew__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormShootingBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::SandWormShootingBehaviourNew__Class>(type_info(), "Moon", "SandWormShootingBehaviourNew");
        }
        inline app::SandWormShootingBehaviourNew* create() {
            return il2cpp::create_object<app::SandWormShootingBehaviourNew>(get_class());
        }
    } // namespace SandWormShootingBehaviourNew
} // namespace app::classes::types
