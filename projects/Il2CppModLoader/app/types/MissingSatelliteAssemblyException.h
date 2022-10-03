#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MissingSatelliteAssemblyException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MissingSatelliteAssemblyException__Class** type_info;
        inline app::MissingSatelliteAssemblyException__Class* get_class() {
            return il2cpp::get_class<app::MissingSatelliteAssemblyException__Class>(type_info, "System.Resources", "MissingSatelliteAssemblyException");
        }
        inline app::MissingSatelliteAssemblyException* create() {
            return il2cpp::create_object<app::MissingSatelliteAssemblyException>(get_class());
        }
    } // namespace MissingSatelliteAssemblyException
} // namespace app::classes::types
