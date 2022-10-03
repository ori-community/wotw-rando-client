#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationPostprocessGroupModifier__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationPostprocessGroupModifier__Array__Class** type_info;
        inline app::AnimationPostprocessGroupModifier__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationPostprocessGroupModifier__Array__Class>(type_info, "Moon", "AnimationPostprocessGroupModifier[]");
        }
        inline app::AnimationPostprocessGroupModifier__Array* create() {
            return il2cpp::create_object<app::AnimationPostprocessGroupModifier__Array>(get_class());
        }
    } // namespace AnimationPostprocessGroupModifier__Array
} // namespace app::classes::types
