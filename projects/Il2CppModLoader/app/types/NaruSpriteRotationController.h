#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NaruSpriteRotationController {
        namespace {
            app::NaruSpriteRotationController__Class* type_info_ref = nullptr;
        }
        app::NaruSpriteRotationController__Class** type_info = &type_info_ref;
        inline app::NaruSpriteRotationController__Class* get_class() {
            return il2cpp::get_class<app::NaruSpriteRotationController__Class>(type_info, "", "NaruSpriteRotationController");
        }
        inline app::NaruSpriteRotationController* create() {
            return il2cpp::create_object<app::NaruSpriteRotationController>(get_class());
        }
    } // namespace NaruSpriteRotationController
} // namespace app::classes::types
