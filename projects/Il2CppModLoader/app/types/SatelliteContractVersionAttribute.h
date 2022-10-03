#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SatelliteContractVersionAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SatelliteContractVersionAttribute__Class** type_info;
        inline app::SatelliteContractVersionAttribute__Class* get_class() {
            return il2cpp::get_class<app::SatelliteContractVersionAttribute__Class>(type_info, "System.Resources", "SatelliteContractVersionAttribute");
        }
        inline app::SatelliteContractVersionAttribute* create() {
            return il2cpp::create_object<app::SatelliteContractVersionAttribute>(get_class());
        }
    } // namespace SatelliteContractVersionAttribute
} // namespace app::classes::types
