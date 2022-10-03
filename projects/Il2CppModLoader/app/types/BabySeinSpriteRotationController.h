#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BabySeinSpriteRotationController {
        namespace {
            app::BabySeinSpriteRotationController__Class* type_info_ref = nullptr;
        }
        app::BabySeinSpriteRotationController__Class** type_info = &type_info_ref;
        inline app::BabySeinSpriteRotationController__Class* get_class() {
            return il2cpp::get_class<app::BabySeinSpriteRotationController__Class>(type_info, "", "BabySeinSpriteRotationController");
        }
        inline app::BabySeinSpriteRotationController* create() {
            return il2cpp::create_object<app::BabySeinSpriteRotationController>(get_class());
        }
    } // namespace BabySeinSpriteRotationController
} // namespace app::classes::types
