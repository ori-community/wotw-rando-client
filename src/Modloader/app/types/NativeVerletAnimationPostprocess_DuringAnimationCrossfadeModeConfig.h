#pragma once
#include <Modloader/app/structs/NativeVerletAnimationPostprocess_DuringAnimationCrossfadeModeConfig.h>
#include <Modloader/app/structs/NativeVerletAnimationPostprocess_DuringAnimationCrossfadeModeConfig__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeVerletAnimationPostprocess_DuringAnimationCrossfadeModeConfig {
        inline app::NativeVerletAnimationPostprocess_DuringAnimationCrossfadeModeConfig__Class** type_info() {
            static app::NativeVerletAnimationPostprocess_DuringAnimationCrossfadeModeConfig__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NativeVerletAnimationPostprocess_DuringAnimationCrossfadeModeConfig__Class**)(modloader::win::memory::resolve_rva(0x04752378));
            }
            return cache;
        }
        inline app::NativeVerletAnimationPostprocess_DuringAnimationCrossfadeModeConfig__Class* get_class() {
            return il2cpp::get_nested_class<app::NativeVerletAnimationPostprocess_DuringAnimationCrossfadeModeConfig__Class>(type_info(), "Moon.Animation", "NativeVerletAnimationPostprocess", "DuringAnimationCrossfadeModeConfig");
        }
        inline app::NativeVerletAnimationPostprocess_DuringAnimationCrossfadeModeConfig* create() {
            return il2cpp::create_object<app::NativeVerletAnimationPostprocess_DuringAnimationCrossfadeModeConfig>(get_class());
        }
    } // namespace NativeVerletAnimationPostprocess_DuringAnimationCrossfadeModeConfig
} // namespace app::classes::types
