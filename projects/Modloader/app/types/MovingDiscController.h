#pragma once
#include <Modloader/app/structs/MovingDiscController.h>
#include <Modloader/app/structs/MovingDiscController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MovingDiscController {
        inline app::MovingDiscController__Class** type_info() {
            static app::MovingDiscController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MovingDiscController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MovingDiscController__Class* get_class() {
            return il2cpp::get_class<app::MovingDiscController__Class>(type_info(), "Moon", "MovingDiscController");
        }
        inline app::MovingDiscController* create() {
            return il2cpp::create_object<app::MovingDiscController>(get_class());
        }
    } // namespace MovingDiscController
} // namespace app::classes::types
