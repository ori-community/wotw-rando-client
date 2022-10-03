#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderAnimatorSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderAnimatorSystem__Class** type_info;
        inline app::UberShaderAnimatorSystem__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAnimatorSystem__Class>(type_info, "Moon.Timeline", "UberShaderAnimatorSystem");
        }
        inline app::UberShaderAnimatorSystem* create() {
            return il2cpp::create_object<app::UberShaderAnimatorSystem>(get_class());
        }
    } // namespace UberShaderAnimatorSystem
} // namespace app::classes::types
