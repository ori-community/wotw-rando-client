#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TransparentWallAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TransparentWallAnimator__Class** type_info;
        inline app::TransparentWallAnimator__Class* get_class() {
            return il2cpp::get_class<app::TransparentWallAnimator__Class>(type_info, "", "TransparentWallAnimator");
        }
        inline app::TransparentWallAnimator* create() {
            return il2cpp::create_object<app::TransparentWallAnimator>(get_class());
        }
    } // namespace TransparentWallAnimator
} // namespace app::classes::types
