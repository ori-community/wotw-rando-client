#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextureAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TextureAnimator__Class** type_info;
        inline app::TextureAnimator__Class* get_class() {
            return il2cpp::get_class<app::TextureAnimator__Class>(type_info, "", "TextureAnimator");
        }
        inline app::TextureAnimator* create() {
            return il2cpp::create_object<app::TextureAnimator>(get_class());
        }
    } // namespace TextureAnimator
} // namespace app::classes::types
