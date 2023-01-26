#pragma once
#include <Modloader/app/structs/VoronoiBase.h>
#include <Modloader/app/structs/VoronoiBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VoronoiBase {
        inline app::VoronoiBase__Class** type_info() {
            static app::VoronoiBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VoronoiBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VoronoiBase__Class* get_class() {
            return il2cpp::get_class<app::VoronoiBase__Class>(type_info(), "TriangleNet.Voronoi", "VoronoiBase");
        }
        inline app::VoronoiBase* create() {
            return il2cpp::create_object<app::VoronoiBase>(get_class());
        }
    } // namespace VoronoiBase
} // namespace app::classes::types
