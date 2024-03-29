#pragma once
#include <Modloader/app/structs/MissingSatelliteAssemblyException.h>
#include <Modloader/app/structs/MissingSatelliteAssemblyException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MissingSatelliteAssemblyException {
        inline app::MissingSatelliteAssemblyException__Class** type_info() {
            static app::MissingSatelliteAssemblyException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MissingSatelliteAssemblyException__Class**)(modloader::win::memory::resolve_rva(0x04716828));
            }
            return cache;
        }
        inline app::MissingSatelliteAssemblyException__Class* get_class() {
            return il2cpp::get_class<app::MissingSatelliteAssemblyException__Class>(type_info(), "System.Resources", "MissingSatelliteAssemblyException");
        }
        inline app::MissingSatelliteAssemblyException* create() {
            return il2cpp::create_object<app::MissingSatelliteAssemblyException>(get_class());
        }
    } // namespace MissingSatelliteAssemblyException
} // namespace app::classes::types
