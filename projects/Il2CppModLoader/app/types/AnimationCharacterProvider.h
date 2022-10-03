#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationCharacterProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationCharacterProvider__Class** type_info;
        inline app::AnimationCharacterProvider__Class* get_class() {
            return il2cpp::get_class<app::AnimationCharacterProvider__Class>(type_info, "", "AnimationCharacterProvider");
        }
        inline app::AnimationCharacterProvider* create() {
            return il2cpp::create_object<app::AnimationCharacterProvider>(get_class());
        }
    } // namespace AnimationCharacterProvider
} // namespace app::classes::types
