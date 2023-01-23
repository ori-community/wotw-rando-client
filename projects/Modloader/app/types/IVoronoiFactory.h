#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IVoronoiFactory__Class.h>

namespace app::classes::types {
    namespace IVoronoiFactory {
        inline app::IVoronoiFactory__Class** type_info = (app::IVoronoiFactory__Class**)(modloader::win::memory::resolve_rva(0x04781C78));
        inline app::IVoronoiFactory__Class* get_class() {
            return il2cpp::get_class<app::IVoronoiFactory__Class>(type_info, "TriangleNet.Voronoi", "IVoronoiFactory");
        }
    } // namespace IVoronoiFactory
} // namespace app::classes::types
