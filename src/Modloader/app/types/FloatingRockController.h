#pragma once
#include <Modloader/app/structs/FloatingRockController.h>
#include <Modloader/app/structs/FloatingRockController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatingRockController {
        inline app::FloatingRockController__Class** type_info() {
            static app::FloatingRockController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatingRockController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatingRockController__Class* get_class() {
            return il2cpp::get_class<app::FloatingRockController__Class>(type_info(), "", "FloatingRockController");
        }
        inline app::FloatingRockController* create() {
            return il2cpp::create_object<app::FloatingRockController>(get_class());
        }
    } // namespace FloatingRockController
} // namespace app::classes::types
