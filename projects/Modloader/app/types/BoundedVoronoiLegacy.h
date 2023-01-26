#pragma once
#include <Modloader/app/structs/BoundedVoronoiLegacy.h>
#include <Modloader/app/structs/BoundedVoronoiLegacy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BoundedVoronoiLegacy {
        inline app::BoundedVoronoiLegacy__Class** type_info() {
            static app::BoundedVoronoiLegacy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BoundedVoronoiLegacy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BoundedVoronoiLegacy__Class* get_class() {
            return il2cpp::get_class<app::BoundedVoronoiLegacy__Class>(type_info(), "TriangleNet.Voronoi.Legacy", "BoundedVoronoiLegacy");
        }
        inline app::BoundedVoronoiLegacy* create() {
            return il2cpp::create_object<app::BoundedVoronoiLegacy>(get_class());
        }
    } // namespace BoundedVoronoiLegacy
} // namespace app::classes::types
