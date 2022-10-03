#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RotateToPlayerInput {
        namespace {
            app::RotateToPlayerInput__Class* type_info_ref = nullptr;
        }
        app::RotateToPlayerInput__Class** type_info = &type_info_ref;
        inline app::RotateToPlayerInput__Class* get_class() {
            return il2cpp::get_class<app::RotateToPlayerInput__Class>(type_info, "", "RotateToPlayerInput");
        }
        inline app::RotateToPlayerInput* create() {
            return il2cpp::create_object<app::RotateToPlayerInput>(get_class());
        }
    } // namespace RotateToPlayerInput
} // namespace app::classes::types
