#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpriteRotationController {
        namespace {
            app::SpriteRotationController__Class* type_info_ref = nullptr;
        }
        app::SpriteRotationController__Class** type_info = &type_info_ref;
        inline app::SpriteRotationController__Class* get_class() {
            return il2cpp::get_class<app::SpriteRotationController__Class>(type_info, "", "SpriteRotationController");
        }
        inline app::SpriteRotationController* create() {
            return il2cpp::create_object<app::SpriteRotationController>(get_class());
        }
    } // namespace SpriteRotationController
} // namespace app::classes::types
