#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActivateAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ActivateAnimator__Class** type_info;
        inline app::ActivateAnimator__Class* get_class() {
            return il2cpp::get_class<app::ActivateAnimator__Class>(type_info, "Moon.Timeline", "ActivateAnimator");
        }
        inline app::ActivateAnimator* create() {
            return il2cpp::create_object<app::ActivateAnimator>(get_class());
        }
    } // namespace ActivateAnimator
} // namespace app::classes::types
