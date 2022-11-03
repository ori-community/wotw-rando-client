#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MissingSatelliteAssemblyException {
        inline app::MissingSatelliteAssemblyException__Class** type_info = (app::MissingSatelliteAssemblyException__Class**)(modloader::win::memory::resolve_rva(0x04716828));
        inline app::MissingSatelliteAssemblyException__Class* get_class() {
            return il2cpp::get_class<app::MissingSatelliteAssemblyException__Class>(type_info, "System.Resources", "MissingSatelliteAssemblyException");
        }
        inline app::MissingSatelliteAssemblyException* create() {
            return il2cpp::create_object<app::MissingSatelliteAssemblyException>(get_class());
        }
    } // namespace MissingSatelliteAssemblyException
} // namespace app::classes::types
