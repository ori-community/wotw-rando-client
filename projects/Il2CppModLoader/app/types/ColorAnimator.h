#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColorAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ColorAnimator__Class** type_info;
        inline app::ColorAnimator__Class* get_class() {
            return il2cpp::get_class<app::ColorAnimator__Class>(type_info, "Moon.Timeline", "ColorAnimator");
        }
        inline app::ColorAnimator* create() {
            return il2cpp::create_object<app::ColorAnimator>(get_class());
        }
    } // namespace ColorAnimator
} // namespace app::classes::types
