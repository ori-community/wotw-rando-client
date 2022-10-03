#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostIndicatorManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostIndicatorManager__Class** type_info;
        inline app::GhostIndicatorManager__Class* get_class() {
            return il2cpp::get_class<app::GhostIndicatorManager__Class>(type_info, "", "GhostIndicatorManager");
        }
        inline app::GhostIndicatorManager* create() {
            return il2cpp::create_object<app::GhostIndicatorManager>(get_class());
        }
    } // namespace GhostIndicatorManager
} // namespace app::classes::types
