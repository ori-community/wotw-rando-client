#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RammingHitWallState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RammingHitWallState__Class** type_info;
        inline app::RammingHitWallState__Class* get_class() {
            return il2cpp::get_class<app::RammingHitWallState__Class>(type_info, "", "RammingHitWallState");
        }
        inline app::RammingHitWallState* create() {
            return il2cpp::create_object<app::RammingHitWallState>(get_class());
        }
    } // namespace RammingHitWallState
} // namespace app::classes::types
