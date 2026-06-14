#pragma once
#include <Modloader/app/structs/ShootMultiProjectileRadialBehaviour.h>
#include <Modloader/app/structs/ShootMultiProjectileRadialBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShootMultiProjectileRadialBehaviour {
        inline app::ShootMultiProjectileRadialBehaviour__Class** type_info() {
            static app::ShootMultiProjectileRadialBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShootMultiProjectileRadialBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShootMultiProjectileRadialBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ShootMultiProjectileRadialBehaviour__Class>(type_info(), "", "ShootMultiProjectileRadialBehaviour");
        }
        inline app::ShootMultiProjectileRadialBehaviour* create() {
            return il2cpp::create_object<app::ShootMultiProjectileRadialBehaviour>(get_class());
        }
    } // namespace ShootMultiProjectileRadialBehaviour
} // namespace app::classes::types
