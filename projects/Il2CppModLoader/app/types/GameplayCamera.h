#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameplayCamera {
        namespace {
            app::GameplayCamera__Class* type_info_ref = nullptr;
        }
        app::GameplayCamera__Class** type_info = &type_info_ref;
        inline app::GameplayCamera__Class* get_class() {
            return il2cpp::get_class<app::GameplayCamera__Class>(type_info, "", "GameplayCamera");
        }
        inline app::GameplayCamera* create() {
            return il2cpp::create_object<app::GameplayCamera>(get_class());
        }
    } // namespace GameplayCamera
} // namespace app::classes::types
