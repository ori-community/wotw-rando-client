#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonFlagsSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonFlagsSystem__Class** type_info;
        inline app::MoonFlagsSystem__Class* get_class() {
            return il2cpp::get_class<app::MoonFlagsSystem__Class>(type_info, "", "MoonFlagsSystem");
        }
        inline app::MoonFlagsSystem* create() {
            return il2cpp::create_object<app::MoonFlagsSystem>(get_class());
        }
    } // namespace MoonFlagsSystem
} // namespace app::classes::types
