#pragma once
#include <Modloader/app/structs/BoundedVoronoi.h>
#include <Modloader/app/structs/BoundedVoronoi__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BoundedVoronoi {
        inline app::BoundedVoronoi__Class** type_info() {
            static app::BoundedVoronoi__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BoundedVoronoi__Class**)(modloader::win::memory::resolve_rva(0x04722E30));
            }
            return cache;
        }
        inline app::BoundedVoronoi__Class* get_class() {
            return il2cpp::get_class<app::BoundedVoronoi__Class>(type_info(), "TriangleNet.Voronoi", "BoundedVoronoi");
        }
        inline app::BoundedVoronoi* create() {
            return il2cpp::create_object<app::BoundedVoronoi>(get_class());
        }
    } // namespace BoundedVoronoi
} // namespace app::classes::types
