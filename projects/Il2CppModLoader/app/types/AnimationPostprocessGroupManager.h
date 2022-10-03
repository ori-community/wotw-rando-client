#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationPostprocessGroupManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationPostprocessGroupManager__Class** type_info;
        inline app::AnimationPostprocessGroupManager__Class* get_class() {
            return il2cpp::get_class<app::AnimationPostprocessGroupManager__Class>(type_info, "Moon", "AnimationPostprocessGroupManager");
        }
        inline app::AnimationPostprocessGroupManager* create() {
            return il2cpp::create_object<app::AnimationPostprocessGroupManager>(get_class());
        }
    } // namespace AnimationPostprocessGroupManager
} // namespace app::classes::types
