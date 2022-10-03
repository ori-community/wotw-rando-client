#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonAnimatorSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonAnimatorSystem__Class** type_info;
        inline app::MoonAnimatorSystem__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimatorSystem__Class>(type_info, "Moon", "MoonAnimatorSystem");
        }
        inline app::MoonAnimatorSystem* create() {
            return il2cpp::create_object<app::MoonAnimatorSystem>(get_class());
        }
    } // namespace MoonAnimatorSystem
} // namespace app::classes::types
