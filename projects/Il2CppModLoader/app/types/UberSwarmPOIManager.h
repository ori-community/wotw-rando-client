#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberSwarmPOIManager {
        inline app::UberSwarmPOIManager__Class** type_info = (app::UberSwarmPOIManager__Class**)(modloader::win::memory::resolve_rva(0x047748D0));
        inline app::UberSwarmPOIManager__Class* get_class() {
            return il2cpp::get_class<app::UberSwarmPOIManager__Class>(type_info, "", "UberSwarmPOIManager");
        }
        inline app::UberSwarmPOIManager* create() {
            return il2cpp::create_object<app::UberSwarmPOIManager>(get_class());
        }
    } // namespace UberSwarmPOIManager
} // namespace app::classes::types
