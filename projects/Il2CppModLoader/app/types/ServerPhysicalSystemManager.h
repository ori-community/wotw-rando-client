#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerPhysicalSystemManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServerPhysicalSystemManager__Class** type_info;
        inline app::ServerPhysicalSystemManager__Class* get_class() {
            return il2cpp::get_class<app::ServerPhysicalSystemManager__Class>(type_info, "", "ServerPhysicalSystemManager");
        }
        inline app::ServerPhysicalSystemManager* create() {
            return il2cpp::create_object<app::ServerPhysicalSystemManager>(get_class());
        }
    } // namespace ServerPhysicalSystemManager
} // namespace app::classes::types
