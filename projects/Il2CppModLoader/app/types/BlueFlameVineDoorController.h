#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BlueFlameVineDoorController {
        namespace {
            app::BlueFlameVineDoorController__Class* type_info_ref = nullptr;
        }
        app::BlueFlameVineDoorController__Class** type_info = &type_info_ref;
        inline app::BlueFlameVineDoorController__Class* get_class() {
            return il2cpp::get_class<app::BlueFlameVineDoorController__Class>(type_info, "Moon", "BlueFlameVineDoorController");
        }
        inline app::BlueFlameVineDoorController* create() {
            return il2cpp::create_object<app::BlueFlameVineDoorController>(get_class());
        }
    } // namespace BlueFlameVineDoorController
} // namespace app::classes::types
