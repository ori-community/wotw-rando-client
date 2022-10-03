#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationMontage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationMontage__Class** type_info;
        inline app::AnimationMontage__Class* get_class() {
            return il2cpp::get_class<app::AnimationMontage__Class>(type_info, "Moon", "AnimationMontage");
        }
        inline app::AnimationMontage* create() {
            return il2cpp::create_object<app::AnimationMontage>(get_class());
        }
    } // namespace AnimationMontage
} // namespace app::classes::types
