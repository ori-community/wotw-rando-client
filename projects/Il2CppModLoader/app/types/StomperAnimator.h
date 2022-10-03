#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StomperAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StomperAnimator__Class** type_info;
        inline app::StomperAnimator__Class* get_class() {
            return il2cpp::get_class<app::StomperAnimator__Class>(type_info, "", "StomperAnimator");
        }
        inline app::StomperAnimator* create() {
            return il2cpp::create_object<app::StomperAnimator>(get_class());
        }
    } // namespace StomperAnimator
} // namespace app::classes::types
