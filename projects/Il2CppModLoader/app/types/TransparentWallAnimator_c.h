#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TransparentWallAnimator_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TransparentWallAnimator_c__Class** type_info;
        inline app::TransparentWallAnimator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TransparentWallAnimator_c__Class>(type_info, "", "TransparentWallAnimator", "<>c");
        }
        inline app::TransparentWallAnimator_c* create() {
            return il2cpp::create_object<app::TransparentWallAnimator_c>(get_class());
        }
    } // namespace TransparentWallAnimator_c
} // namespace app::classes::types
