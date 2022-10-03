#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScalableAnimationPlayer_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScalableAnimationPlayer_c__Class** type_info;
        inline app::ScalableAnimationPlayer_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ScalableAnimationPlayer_c__Class>(type_info, "Moon", "ScalableAnimationPlayer", "<>c");
        }
        inline app::ScalableAnimationPlayer_c* create() {
            return il2cpp::create_object<app::ScalableAnimationPlayer_c>(get_class());
        }
    } // namespace ScalableAnimationPlayer_c
} // namespace app::classes::types
