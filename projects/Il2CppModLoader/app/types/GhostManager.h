#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostManager__Class** type_info;
        inline app::GhostManager__Class* get_class() {
            return il2cpp::get_class<app::GhostManager__Class>(type_info, "", "GhostManager");
        }
        inline app::GhostManager* create() {
            return il2cpp::create_object<app::GhostManager>(get_class());
        }
    } // namespace GhostManager
} // namespace app::classes::types
