#pragma once
#include <Modloader/app/structs/MovingPlatformController.h>
#include <Modloader/app/structs/MovingPlatformController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MovingPlatformController {
        inline app::MovingPlatformController__Class** type_info() {
            static app::MovingPlatformController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MovingPlatformController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MovingPlatformController__Class* get_class() {
            return il2cpp::get_class<app::MovingPlatformController__Class>(type_info(), "", "MovingPlatformController");
        }
        inline app::MovingPlatformController* create() {
            return il2cpp::create_object<app::MovingPlatformController>(get_class());
        }
    } // namespace MovingPlatformController
} // namespace app::classes::types
