#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VoronoiRegion {
        inline app::VoronoiRegion__Class** type_info = (app::VoronoiRegion__Class**)(modloader::win::memory::resolve_rva(0x0477AB40));
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
