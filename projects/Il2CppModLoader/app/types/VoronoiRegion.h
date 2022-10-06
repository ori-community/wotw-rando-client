#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VoronoiRegion {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VoronoiRegion__Class** type_info;
        inline app::VoronoiRegion__Class* get_class() {
            return il2cpp::get_class<app::VoronoiRegion__Class>(type_info, "TriangleNet.Voronoi.Legacy", "VoronoiRegion");
        }
        inline app::VoronoiRegion* create() {
            return il2cpp::create_object<app::VoronoiRegion>(get_class());
        }
        inline app::VoronoiRegion__Array* create_array(int size) {
            return il2cpp::array_new<app::VoronoiRegion__Array>(get_class(), size);
        }
        inline app::VoronoiRegion__Array* create_array(const std::vector<app::VoronoiRegion*>& items) {
            return il2cpp::array_new<app::VoronoiRegion__Array>(get_class(), items);
        }
    } // namespace VoronoiRegion
} // namespace app::classes::types
