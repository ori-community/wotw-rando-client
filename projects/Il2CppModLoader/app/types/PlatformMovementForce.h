#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlatformMovementForce {
        namespace {
            app::PlatformMovementForce__Class* type_info_ref = nullptr;
        }
        app::PlatformMovementForce__Class** type_info = &type_info_ref;
        inline app::PlatformMovementForce__Class* get_class() {
            return il2cpp::get_class<app::PlatformMovementForce__Class>(type_info, "", "PlatformMovementForce");
        }
        inline app::PlatformMovementForce* create() {
            return il2cpp::create_object<app::PlatformMovementForce>(get_class());
        }
    } // namespace PlatformMovementForce
} // namespace app::classes::types
