#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SatelliteContractVersionAttribute {
        inline app::SatelliteContractVersionAttribute__Class** type_info = (app::SatelliteContractVersionAttribute__Class**)(modloader::win::memory::resolve_rva(0x0476DE48));
        inline app::SatelliteContractVersionAttribute__Class* get_class() {
            return il2cpp::get_class<app::SatelliteContractVersionAttribute__Class>(type_info, "System.Resources", "SatelliteContractVersionAttribute");
        }
        inline app::SatelliteContractVersionAttribute* create() {
            return il2cpp::create_object<app::SatelliteContractVersionAttribute>(get_class());
        }
    } // namespace SatelliteContractVersionAttribute
} // namespace app::classes::types
