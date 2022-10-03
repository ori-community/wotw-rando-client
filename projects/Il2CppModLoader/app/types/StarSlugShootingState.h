#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StarSlugShootingState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StarSlugShootingState__Class** type_info;
        inline app::StarSlugShootingState__Class* get_class() {
            return il2cpp::get_class<app::StarSlugShootingState__Class>(type_info, "", "StarSlugShootingState");
        }
        inline app::StarSlugShootingState* create() {
            return il2cpp::create_object<app::StarSlugShootingState>(get_class());
        }
    } // namespace StarSlugShootingState
} // namespace app::classes::types
