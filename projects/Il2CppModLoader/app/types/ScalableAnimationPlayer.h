#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScalableAnimationPlayer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScalableAnimationPlayer__Class** type_info;
        inline app::ScalableAnimationPlayer__Class* get_class() {
            return il2cpp::get_class<app::ScalableAnimationPlayer__Class>(type_info, "Moon", "ScalableAnimationPlayer");
        }
        inline app::ScalableAnimationPlayer* create() {
            return il2cpp::create_object<app::ScalableAnimationPlayer>(get_class());
        }
        inline app::ScalableAnimationPlayer__Array* create_array(int size) {
            return il2cpp::array_new<app::ScalableAnimationPlayer__Array>(get_class(), size);
        }
    } // namespace ScalableAnimationPlayer
} // namespace app::classes::types
