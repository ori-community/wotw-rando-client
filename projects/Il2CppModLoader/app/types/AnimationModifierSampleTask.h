#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationModifierSampleTask {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationModifierSampleTask__Class** type_info;
        inline app::AnimationModifierSampleTask__Class* get_class() {
            return il2cpp::get_class<app::AnimationModifierSampleTask__Class>(type_info, "Moon.ArtOptimization", "AnimationModifierSampleTask");
        }
        inline app::AnimationModifierSampleTask* create() {
            return il2cpp::create_object<app::AnimationModifierSampleTask>(get_class());
        }
    } // namespace AnimationModifierSampleTask
} // namespace app::classes::types
