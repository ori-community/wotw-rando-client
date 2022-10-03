#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationAdditiveStrengthContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationAdditiveStrengthContext__Class** type_info;
        inline app::AnimationAdditiveStrengthContext__Class* get_class() {
            return il2cpp::get_class<app::AnimationAdditiveStrengthContext__Class>(type_info, "Moon", "AnimationAdditiveStrengthContext");
        }
        inline app::AnimationAdditiveStrengthContext* create() {
            return il2cpp::create_object<app::AnimationAdditiveStrengthContext>(get_class());
        }
    } // namespace AnimationAdditiveStrengthContext
} // namespace app::classes::types
