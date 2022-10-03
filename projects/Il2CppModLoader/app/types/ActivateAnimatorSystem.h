#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActivateAnimatorSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ActivateAnimatorSystem__Class** type_info;
        inline app::ActivateAnimatorSystem__Class* get_class() {
            return il2cpp::get_class<app::ActivateAnimatorSystem__Class>(type_info, "Moon.Timeline", "ActivateAnimatorSystem");
        }
        inline app::ActivateAnimatorSystem* create() {
            return il2cpp::create_object<app::ActivateAnimatorSystem>(get_class());
        }
    } // namespace ActivateAnimatorSystem
} // namespace app::classes::types
