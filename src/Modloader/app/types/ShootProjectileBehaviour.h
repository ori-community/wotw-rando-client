#pragma once
#include <Modloader/app/structs/ShootProjectileBehaviour.h>
#include <Modloader/app/structs/ShootProjectileBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShootProjectileBehaviour {
        inline app::ShootProjectileBehaviour__Class** type_info() {
            static app::ShootProjectileBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShootProjectileBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShootProjectileBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ShootProjectileBehaviour__Class>(type_info(), "", "ShootProjectileBehaviour");
        }
        inline app::ShootProjectileBehaviour* create() {
            return il2cpp::create_object<app::ShootProjectileBehaviour>(get_class());
        }
    } // namespace ShootProjectileBehaviour
} // namespace app::classes::types
