#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TurbulenceOverride {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TurbulenceOverride__Class** type_info;
        inline app::TurbulenceOverride__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceOverride__Class>(type_info, "", "TurbulenceOverride");
        }
        inline app::TurbulenceOverride* create() {
            return il2cpp::create_object<app::TurbulenceOverride>(get_class());
        }
    } // namespace TurbulenceOverride
} // namespace app::classes::types
