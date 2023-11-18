#pragma once
#include <Modloader/app/structs/NaruSpriteRotationController.h>
#include <Modloader/app/structs/NaruSpriteRotationController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NaruSpriteRotationController {
        inline app::NaruSpriteRotationController__Class** type_info() {
            static app::NaruSpriteRotationController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NaruSpriteRotationController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NaruSpriteRotationController__Class* get_class() {
            return il2cpp::get_class<app::NaruSpriteRotationController__Class>(type_info(), "", "NaruSpriteRotationController");
        }
        inline app::NaruSpriteRotationController* create() {
            return il2cpp::create_object<app::NaruSpriteRotationController>(get_class());
        }
    } // namespace NaruSpriteRotationController
} // namespace app::classes::types
