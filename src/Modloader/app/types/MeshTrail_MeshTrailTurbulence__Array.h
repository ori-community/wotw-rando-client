#pragma once
#include <Modloader/app/structs/MeshTrail_MeshTrailTurbulence__Array.h>
#include <Modloader/app/structs/MeshTrail_MeshTrailTurbulence__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeshTrail_MeshTrailTurbulence__Array {
        inline app::MeshTrail_MeshTrailTurbulence__Array__Class** type_info() {
            static app::MeshTrail_MeshTrailTurbulence__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeshTrail_MeshTrailTurbulence__Array__Class**)(modloader::win::memory::resolve_rva(0x0477A580));
            }
            return cache;
        }
        inline app::MeshTrail_MeshTrailTurbulence__Array__Class* get_class() {
            return il2cpp::get_class<app::MeshTrail_MeshTrailTurbulence__Array__Class>(type_info(), "", "MeshTrail+MeshTrailTurbulence[]");
        }
        inline app::MeshTrail_MeshTrailTurbulence__Array* create() {
            return il2cpp::create_object<app::MeshTrail_MeshTrailTurbulence__Array>(get_class());
        }
    } // namespace MeshTrail_MeshTrailTurbulence__Array
} // namespace app::classes::types
