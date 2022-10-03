#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RayCastManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RayCastManager__Class** type_info;
        inline app::RayCastManager__Class* get_class() {
            return il2cpp::get_class<app::RayCastManager__Class>(type_info, "", "RayCastManager");
        }
        inline app::RayCastManager* create() {
            return il2cpp::create_object<app::RayCastManager>(get_class());
        }
    } // namespace RayCastManager
} // namespace app::classes::types
