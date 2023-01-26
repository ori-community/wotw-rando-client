#pragma once
#include <Modloader/app/structs/MoonCharacterController.h>
#include <Modloader/app/structs/MoonCharacterController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonCharacterController {
        inline app::MoonCharacterController__Class** type_info() {
            static app::MoonCharacterController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonCharacterController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonCharacterController__Class* get_class() {
            return il2cpp::get_class<app::MoonCharacterController__Class>(type_info(), "", "MoonCharacterController");
        }
        inline app::MoonCharacterController* create() {
            return il2cpp::create_object<app::MoonCharacterController>(get_class());
        }
    } // namespace MoonCharacterController
} // namespace app::classes::types
