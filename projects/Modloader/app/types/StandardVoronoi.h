#pragma once
#include <Modloader/app/structs/StandardVoronoi.h>
#include <Modloader/app/structs/StandardVoronoi__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StandardVoronoi {
        inline app::StandardVoronoi__Class** type_info() {
            static app::StandardVoronoi__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StandardVoronoi__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StandardVoronoi__Class* get_class() {
            return il2cpp::get_class<app::StandardVoronoi__Class>(type_info(), "TriangleNet.Voronoi", "StandardVoronoi");
        }
        inline app::StandardVoronoi* create() {
            return il2cpp::create_object<app::StandardVoronoi>(get_class());
        }
    } // namespace StandardVoronoi
} // namespace app::classes::types
