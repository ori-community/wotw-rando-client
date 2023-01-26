#pragma once
#include <Modloader/app/structs/PlatformMovementForce.h>
#include <Modloader/app/structs/PlatformMovementForce__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlatformMovementForce {
        inline app::PlatformMovementForce__Class** type_info() {
            static app::PlatformMovementForce__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlatformMovementForce__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlatformMovementForce__Class* get_class() {
            return il2cpp::get_class<app::PlatformMovementForce__Class>(type_info(), "", "PlatformMovementForce");
        }
        inline app::PlatformMovementForce* create() {
            return il2cpp::create_object<app::PlatformMovementForce>(get_class());
        }
    } // namespace PlatformMovementForce
} // namespace app::classes::types
