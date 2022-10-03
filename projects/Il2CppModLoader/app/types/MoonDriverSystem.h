#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonDriverSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonDriverSystem__Class** type_info;
        inline app::MoonDriverSystem__Class* get_class() {
            return il2cpp::get_class<app::MoonDriverSystem__Class>(type_info, "Moon", "MoonDriverSystem");
        }
        inline app::MoonDriverSystem* create() {
            return il2cpp::create_object<app::MoonDriverSystem>(get_class());
        }
    } // namespace MoonDriverSystem
} // namespace app::classes::types
