#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpringAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpringAnimator__Class** type_info;
        inline app::SpringAnimator__Class* get_class() {
            return il2cpp::get_class<app::SpringAnimator__Class>(type_info, "", "SpringAnimator");
        }
        inline app::SpringAnimator* create() {
            return il2cpp::create_object<app::SpringAnimator>(get_class());
        }
    } // namespace SpringAnimator
} // namespace app::classes::types
