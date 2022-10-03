#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeshTrail_MeshTrailTurbulence__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MeshTrail_MeshTrailTurbulence__Array__Class** type_info;
        inline app::MeshTrail_MeshTrailTurbulence__Array__Class* get_class() {
            return il2cpp::get_class<app::MeshTrail_MeshTrailTurbulence__Array__Class>(type_info, "", "MeshTrail+MeshTrailTurbulence[]");
        }
        inline app::MeshTrail_MeshTrailTurbulence__Array* create() {
            return il2cpp::create_object<app::MeshTrail_MeshTrailTurbulence__Array>(get_class());
        }
    } // namespace MeshTrail_MeshTrailTurbulence__Array
} // namespace app::classes::types
