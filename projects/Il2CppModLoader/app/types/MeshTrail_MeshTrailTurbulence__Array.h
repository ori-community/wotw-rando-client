#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MeshTrail_MeshTrailTurbulence__Array {
        inline app::MeshTrail_MeshTrailTurbulence__Array__Class** type_info = (app::MeshTrail_MeshTrailTurbulence__Array__Class**)(modloader::win::memory::resolve_rva(0x0477A580));
        inline app::MeshTrail_MeshTrailTurbulence__Array__Class* get_class() {
            return il2cpp::get_class<app::MeshTrail_MeshTrailTurbulence__Array__Class>(type_info, "", "MeshTrail+MeshTrailTurbulence[]");
        }
        inline app::MeshTrail_MeshTrailTurbulence__Array* create() {
            return il2cpp::create_object<app::MeshTrail_MeshTrailTurbulence__Array>(get_class());
        }
    } // namespace MeshTrail_MeshTrailTurbulence__Array
} // namespace app::classes::types
