#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColorAnimatorSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ColorAnimatorSystem__Class** type_info;
        inline app::ColorAnimatorSystem__Class* get_class() {
            return il2cpp::get_class<app::ColorAnimatorSystem__Class>(type_info, "Moon.Timeline", "ColorAnimatorSystem");
        }
        inline app::ColorAnimatorSystem* create() {
            return il2cpp::create_object<app::ColorAnimatorSystem>(get_class());
        }
    } // namespace ColorAnimatorSystem
} // namespace app::classes::types
