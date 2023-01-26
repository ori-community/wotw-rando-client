#pragma once
#include <Modloader/app/structs/BlueFlameVineDoorController.h>
#include <Modloader/app/structs/BlueFlameVineDoorController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlueFlameVineDoorController {
        inline app::BlueFlameVineDoorController__Class** type_info() {
            static app::BlueFlameVineDoorController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BlueFlameVineDoorController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BlueFlameVineDoorController__Class* get_class() {
            return il2cpp::get_class<app::BlueFlameVineDoorController__Class>(type_info(), "Moon", "BlueFlameVineDoorController");
        }
        inline app::BlueFlameVineDoorController* create() {
            return il2cpp::create_object<app::BlueFlameVineDoorController>(get_class());
        }
    } // namespace BlueFlameVineDoorController
} // namespace app::classes::types
