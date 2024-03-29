#pragma once
#include <Modloader/app/structs/BabySeinSpriteRotationController.h>
#include <Modloader/app/structs/BabySeinSpriteRotationController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BabySeinSpriteRotationController {
        inline app::BabySeinSpriteRotationController__Class** type_info() {
            static app::BabySeinSpriteRotationController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BabySeinSpriteRotationController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BabySeinSpriteRotationController__Class* get_class() {
            return il2cpp::get_class<app::BabySeinSpriteRotationController__Class>(type_info(), "", "BabySeinSpriteRotationController");
        }
        inline app::BabySeinSpriteRotationController* create() {
            return il2cpp::create_object<app::BabySeinSpriteRotationController>(get_class());
        }
    } // namespace BabySeinSpriteRotationController
} // namespace app::classes::types
