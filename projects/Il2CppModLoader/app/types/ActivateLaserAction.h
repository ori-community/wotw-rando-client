#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActivateLaserAction {
        namespace {
            app::ActivateLaserAction__Class* type_info_ref = nullptr;
        }
        app::ActivateLaserAction__Class** type_info = &type_info_ref;
        inline app::ActivateLaserAction__Class* get_class() {
            return il2cpp::get_class<app::ActivateLaserAction__Class>(type_info, "", "ActivateLaserAction");
        }
        inline app::ActivateLaserAction* create() {
            return il2cpp::create_object<app::ActivateLaserAction>(get_class());
        }
    } // namespace ActivateLaserAction
} // namespace app::classes::types
