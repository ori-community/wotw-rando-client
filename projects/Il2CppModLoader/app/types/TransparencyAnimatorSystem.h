#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TransparencyAnimatorSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TransparencyAnimatorSystem__Class** type_info;
        inline app::TransparencyAnimatorSystem__Class* get_class() {
            return il2cpp::get_class<app::TransparencyAnimatorSystem__Class>(type_info, "Moon.Timeline", "TransparencyAnimatorSystem");
        }
        inline app::TransparencyAnimatorSystem* create() {
            return il2cpp::create_object<app::TransparencyAnimatorSystem>(get_class());
        }
    } // namespace TransparencyAnimatorSystem
} // namespace app::classes::types
