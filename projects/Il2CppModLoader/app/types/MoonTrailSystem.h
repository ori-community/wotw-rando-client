#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTrailSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTrailSystem__Class** type_info;
        inline app::MoonTrailSystem__Class* get_class() {
            return il2cpp::get_class<app::MoonTrailSystem__Class>(type_info, "Moon", "MoonTrailSystem");
        }
        inline app::MoonTrailSystem* create() {
            return il2cpp::create_object<app::MoonTrailSystem>(get_class());
        }
    } // namespace MoonTrailSystem
} // namespace app::classes::types
