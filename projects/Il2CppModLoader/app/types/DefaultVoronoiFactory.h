#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DefaultVoronoiFactory {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DefaultVoronoiFactory__Class** type_info;
        inline app::DefaultVoronoiFactory__Class* get_class() {
            return il2cpp::get_class<app::DefaultVoronoiFactory__Class>(type_info, "TriangleNet.Voronoi", "DefaultVoronoiFactory");
        }
        inline app::DefaultVoronoiFactory* create() {
            return il2cpp::create_object<app::DefaultVoronoiFactory>(get_class());
        }
    } // namespace DefaultVoronoiFactory
} // namespace app::classes::types
