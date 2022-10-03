#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AcidSlugShootingState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AcidSlugShootingState__Class** type_info;
        inline app::AcidSlugShootingState__Class* get_class() {
            return il2cpp::get_class<app::AcidSlugShootingState__Class>(type_info, "", "AcidSlugShootingState");
        }
        inline app::AcidSlugShootingState* create() {
            return il2cpp::create_object<app::AcidSlugShootingState>(get_class());
        }
    } // namespace AcidSlugShootingState
} // namespace app::classes::types
