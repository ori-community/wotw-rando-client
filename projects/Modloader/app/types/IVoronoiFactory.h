#pragma once
#include <Modloader/app/structs/IVoronoiFactory.h>
#include <Modloader/app/structs/IVoronoiFactory__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVoronoiFactory {
        inline app::IVoronoiFactory__Class** type_info() {
            static app::IVoronoiFactory__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVoronoiFactory__Class**)(modloader::win::memory::resolve_rva(0x04781C78));
            }
            return cache;
        }
        inline app::IVoronoiFactory__Class* get_class() {
            return il2cpp::get_class<app::IVoronoiFactory__Class>(type_info(), "TriangleNet.Voronoi", "IVoronoiFactory");
        }
    } // namespace IVoronoiFactory
} // namespace app::classes::types
