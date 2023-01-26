#pragma once
#include <Modloader/app/structs/CartPlatformMovement.h>
#include <Modloader/app/structs/CartPlatformMovement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CartPlatformMovement {
        inline app::CartPlatformMovement__Class** type_info() {
            static app::CartPlatformMovement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CartPlatformMovement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CartPlatformMovement__Class* get_class() {
            return il2cpp::get_class<app::CartPlatformMovement__Class>(type_info(), "", "CartPlatformMovement");
        }
        inline app::CartPlatformMovement* create() {
            return il2cpp::create_object<app::CartPlatformMovement>(get_class());
        }
    } // namespace CartPlatformMovement
} // namespace app::classes::types
