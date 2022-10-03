#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColliderAnimatorSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ColliderAnimatorSystem__Class** type_info;
        inline app::ColliderAnimatorSystem__Class* get_class() {
            return il2cpp::get_class<app::ColliderAnimatorSystem__Class>(type_info, "", "ColliderAnimatorSystem");
        }
        inline app::ColliderAnimatorSystem* create() {
            return il2cpp::create_object<app::ColliderAnimatorSystem>(get_class());
        }
    } // namespace ColliderAnimatorSystem
} // namespace app::classes::types
