#pragma once
#include <Modloader/app/structs/SeinSpriteRotationController.h>
#include <Modloader/app/structs/SeinSpriteRotationController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinSpriteRotationController {
        inline app::SeinSpriteRotationController__Class** type_info() {
            static app::SeinSpriteRotationController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinSpriteRotationController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinSpriteRotationController__Class* get_class() {
            return il2cpp::get_class<app::SeinSpriteRotationController__Class>(type_info(), "", "SeinSpriteRotationController");
        }
        inline app::SeinSpriteRotationController* create() {
            return il2cpp::create_object<app::SeinSpriteRotationController>(get_class());
        }
    } // namespace SeinSpriteRotationController
} // namespace app::classes::types
