#pragma once
#include <Modloader/app/structs/VoronoiRegion__Array.h>
#include <Modloader/app/structs/VoronoiRegion__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VoronoiRegion__Array {
        inline app::VoronoiRegion__Array__Class** type_info() {
            static app::VoronoiRegion__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VoronoiRegion__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VoronoiRegion__Array__Class* get_class() {
            return il2cpp::get_class<app::VoronoiRegion__Array__Class>(type_info(), "TriangleNet.Voronoi.Legacy", "VoronoiRegion[]");
        }
        inline app::VoronoiRegion__Array* create() {
            return il2cpp::create_object<app::VoronoiRegion__Array>(get_class());
        }
    } // namespace VoronoiRegion__Array
} // namespace app::classes::types
