#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BoundedVoronoi {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BoundedVoronoi__Class** type_info;
        inline app::BoundedVoronoi__Class* get_class() {
            return il2cpp::get_class<app::BoundedVoronoi__Class>(type_info, "TriangleNet.Voronoi", "BoundedVoronoi");
        }
        inline app::BoundedVoronoi* create() {
            return il2cpp::create_object<app::BoundedVoronoi>(get_class());
        }
    } // namespace BoundedVoronoi
} // namespace app::classes::types
