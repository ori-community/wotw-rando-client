#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationSample {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationSample__Class** type_info;
        inline app::AnimationSample__Class* get_class() {
            return il2cpp::get_class<app::AnimationSample__Class>(type_info, "Moon.ArtOptimization", "AnimationSample");
        }
        inline app::AnimationSample* create() {
            return il2cpp::create_object<app::AnimationSample>(get_class());
        }
    } // namespace AnimationSample
} // namespace app::classes::types
