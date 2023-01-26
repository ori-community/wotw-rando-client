#pragma once
#include <Modloader/app/structs/ShootProjectileBehaviourNew.h>
#include <Modloader/app/structs/ShootProjectileBehaviourNew__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShootProjectileBehaviourNew {
        inline app::ShootProjectileBehaviourNew__Class** type_info() {
            static app::ShootProjectileBehaviourNew__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShootProjectileBehaviourNew__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShootProjectileBehaviourNew__Class* get_class() {
            return il2cpp::get_class<app::ShootProjectileBehaviourNew__Class>(type_info(), "", "ShootProjectileBehaviourNew");
        }
        inline app::ShootProjectileBehaviourNew* create() {
            return il2cpp::create_object<app::ShootProjectileBehaviourNew>(get_class());
        }
    } // namespace ShootProjectileBehaviourNew
} // namespace app::classes::types
