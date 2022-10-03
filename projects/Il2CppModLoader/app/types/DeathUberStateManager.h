#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeathUberStateManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeathUberStateManager__Class** type_info;
        inline app::DeathUberStateManager__Class* get_class() {
            return il2cpp::get_class<app::DeathUberStateManager__Class>(type_info, "", "DeathUberStateManager");
        }
        inline app::DeathUberStateManager* create() {
            return il2cpp::create_object<app::DeathUberStateManager>(get_class());
        }
    } // namespace DeathUberStateManager
} // namespace app::classes::types
