#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameMapTransitionManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameMapTransitionManager__Class** type_info;
        inline app::GameMapTransitionManager__Class* get_class() {
            return il2cpp::get_class<app::GameMapTransitionManager__Class>(type_info, "", "GameMapTransitionManager");
        }
        inline app::GameMapTransitionManager* create() {
            return il2cpp::create_object<app::GameMapTransitionManager>(get_class());
        }
    } // namespace GameMapTransitionManager
} // namespace app::classes::types
