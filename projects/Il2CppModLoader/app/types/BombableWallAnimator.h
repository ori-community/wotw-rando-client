#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BombableWallAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BombableWallAnimator__Class** type_info;
        inline app::BombableWallAnimator__Class* get_class() {
            return il2cpp::get_class<app::BombableWallAnimator__Class>(type_info, "", "BombableWallAnimator");
        }
        inline app::BombableWallAnimator* create() {
            return il2cpp::create_object<app::BombableWallAnimator>(get_class());
        }
    } // namespace BombableWallAnimator
} // namespace app::classes::types
