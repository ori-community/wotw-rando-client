#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberSwarmPOIManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberSwarmPOIManager__Class** type_info;
        inline app::UberSwarmPOIManager__Class* get_class() {
            return il2cpp::get_class<app::UberSwarmPOIManager__Class>(type_info, "", "UberSwarmPOIManager");
        }
        inline app::UberSwarmPOIManager* create() {
            return il2cpp::create_object<app::UberSwarmPOIManager>(get_class());
        }
    } // namespace UberSwarmPOIManager
} // namespace app::classes::types
