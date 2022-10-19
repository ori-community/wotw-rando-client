#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVoronoiFactory {
        inline app::IVoronoiFactory__Class** type_info = (app::IVoronoiFactory__Class**)(modloader::win::memory::resolve_rva(0x04781C78));
        inline app::IVoronoiFactory__Class* get_class() {
            return il2cpp::get_class<app::IVoronoiFactory__Class>(type_info, "TriangleNet.Voronoi", "IVoronoiFactory");
        }
    } // namespace IVoronoiFactory
} // namespace app::classes::types
