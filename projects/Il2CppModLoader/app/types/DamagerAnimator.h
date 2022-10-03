#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamagerAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DamagerAnimator__Class** type_info;
        inline app::DamagerAnimator__Class* get_class() {
            return il2cpp::get_class<app::DamagerAnimator__Class>(type_info, "", "DamagerAnimator");
        }
        inline app::DamagerAnimator* create() {
            return il2cpp::create_object<app::DamagerAnimator>(get_class());
        }
    } // namespace DamagerAnimator
} // namespace app::classes::types
