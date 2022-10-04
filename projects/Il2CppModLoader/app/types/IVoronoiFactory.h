#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVoronoiFactory {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVoronoiFactory__Class** type_info;
        inline app::IVoronoiFactory__Class* get_class() {
            return il2cpp::get_class<app::IVoronoiFactory__Class>(type_info, "TriangleNet.Voronoi", "IVoronoiFactory");
        }
        inline app::IVoronoiFactory* create() {
            return il2cpp::create_object<app::IVoronoiFactory>(get_class());
        }
    } // namespace IVoronoiFactory
} // namespace app::classes::types
