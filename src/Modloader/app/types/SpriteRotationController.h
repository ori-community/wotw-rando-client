#pragma once
#include <Modloader/app/structs/SpriteRotationController.h>
#include <Modloader/app/structs/SpriteRotationController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpriteRotationController {
        inline app::SpriteRotationController__Class** type_info() {
            static app::SpriteRotationController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpriteRotationController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpriteRotationController__Class* get_class() {
            return il2cpp::get_class<app::SpriteRotationController__Class>(type_info(), "", "SpriteRotationController");
        }
        inline app::SpriteRotationController* create() {
            return il2cpp::create_object<app::SpriteRotationController>(get_class());
        }
    } // namespace SpriteRotationController
} // namespace app::classes::types
