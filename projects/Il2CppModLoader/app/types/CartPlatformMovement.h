#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CartPlatformMovement {
        namespace {
            app::CartPlatformMovement__Class* type_info_ref = nullptr;
        }
        app::CartPlatformMovement__Class** type_info = &type_info_ref;
        inline app::CartPlatformMovement__Class* get_class() {
            return il2cpp::get_class<app::CartPlatformMovement__Class>(type_info, "", "CartPlatformMovement");
        }
        inline app::CartPlatformMovement* create() {
            return il2cpp::create_object<app::CartPlatformMovement>(get_class());
        }
    } // namespace CartPlatformMovement
} // namespace app::classes::types
