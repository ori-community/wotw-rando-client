#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SoundAnimator__Class** type_info;
        inline app::SoundAnimator__Class* get_class() {
            return il2cpp::get_class<app::SoundAnimator__Class>(type_info, "", "SoundAnimator");
        }
        inline app::SoundAnimator* create() {
            return il2cpp::create_object<app::SoundAnimator>(get_class());
        }
    } // namespace SoundAnimator
} // namespace app::classes::types
