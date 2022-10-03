#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TurbulenceManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TurbulenceManager__Class** type_info;
        inline app::TurbulenceManager__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceManager__Class>(type_info, "", "TurbulenceManager");
        }
        inline app::TurbulenceManager* create() {
            return il2cpp::create_object<app::TurbulenceManager>(get_class());
        }
    } // namespace TurbulenceManager
} // namespace app::classes::types
