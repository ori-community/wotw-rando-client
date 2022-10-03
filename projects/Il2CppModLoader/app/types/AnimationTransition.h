#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationTransition {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationTransition__Class** type_info;
        inline app::AnimationTransition__Class* get_class() {
            return il2cpp::get_class<app::AnimationTransition__Class>(type_info, "Moon", "AnimationTransition");
        }
        inline app::AnimationTransition* create() {
            return il2cpp::create_object<app::AnimationTransition>(get_class());
        }
        inline app::AnimationTransition__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationTransition__Array>(get_class(), size);
        }
    } // namespace AnimationTransition
} // namespace app::classes::types
