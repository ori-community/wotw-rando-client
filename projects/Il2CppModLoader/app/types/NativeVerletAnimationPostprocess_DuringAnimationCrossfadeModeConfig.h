#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NativeVerletAnimationPostprocess_DuringAnimationCrossfadeModeConfig {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NativeVerletAnimationPostprocess_DuringAnimationCrossfadeModeConfig__Class** type_info;
        inline app::NativeVerletAnimationPostprocess_DuringAnimationCrossfadeModeConfig__Class* get_class() {
            return il2cpp::get_nested_class<app::NativeVerletAnimationPostprocess_DuringAnimationCrossfadeModeConfig__Class>(type_info, "Moon.Animation", "NativeVerletAnimationPostprocess", "DuringAnimationCrossfadeModeConfig");
        }
        inline app::NativeVerletAnimationPostprocess_DuringAnimationCrossfadeModeConfig* create() {
            return il2cpp::create_object<app::NativeVerletAnimationPostprocess_DuringAnimationCrossfadeModeConfig>(get_class());
        }
    } // namespace NativeVerletAnimationPostprocess_DuringAnimationCrossfadeModeConfig
} // namespace app::classes::types
