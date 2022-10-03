#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinSpriteRotationController {
        namespace {
            app::SeinSpriteRotationController__Class* type_info_ref = nullptr;
        }
        app::SeinSpriteRotationController__Class** type_info = &type_info_ref;
        inline app::SeinSpriteRotationController__Class* get_class() {
            return il2cpp::get_class<app::SeinSpriteRotationController__Class>(type_info, "", "SeinSpriteRotationController");
        }
        inline app::SeinSpriteRotationController* create() {
            return il2cpp::create_object<app::SeinSpriteRotationController>(get_class());
        }
    } // namespace SeinSpriteRotationController
} // namespace app::classes::types
