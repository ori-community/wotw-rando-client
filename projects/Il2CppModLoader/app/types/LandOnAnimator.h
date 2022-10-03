#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LandOnAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LandOnAnimator__Class** type_info;
        inline app::LandOnAnimator__Class* get_class() {
            return il2cpp::get_class<app::LandOnAnimator__Class>(type_info, "", "LandOnAnimator");
        }
        inline app::LandOnAnimator* create() {
            return il2cpp::create_object<app::LandOnAnimator>(get_class());
        }
    } // namespace LandOnAnimator
} // namespace app::classes::types
