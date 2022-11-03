#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BoundedVoronoi {
        inline app::BoundedVoronoi__Class** type_info = (app::BoundedVoronoi__Class**)(modloader::win::memory::resolve_rva(0x04722E30));
        inline app::BoundedVoronoi__Class* get_class() {
            return il2cpp::get_class<app::BoundedVoronoi__Class>(type_info, "TriangleNet.Voronoi", "BoundedVoronoi");
        }
        inline app::BoundedVoronoi* create() {
            return il2cpp::create_object<app::BoundedVoronoi>(get_class());
        }
    } // namespace BoundedVoronoi
} // namespace app::classes::types
