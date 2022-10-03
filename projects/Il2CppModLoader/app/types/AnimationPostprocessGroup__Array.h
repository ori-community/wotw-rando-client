#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationPostprocessGroup__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationPostprocessGroup__Array__Class** type_info;
        inline app::AnimationPostprocessGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationPostprocessGroup__Array__Class>(type_info, "Moon", "AnimationPostprocessGroup[]");
        }
        inline app::AnimationPostprocessGroup__Array* create() {
            return il2cpp::create_object<app::AnimationPostprocessGroup__Array>(get_class());
        }
    } // namespace AnimationPostprocessGroup__Array
} // namespace app::classes::types
