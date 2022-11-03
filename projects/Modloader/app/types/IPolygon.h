#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPolygon {
        inline app::IPolygon__Class** type_info = (app::IPolygon__Class**)(modloader::win::memory::resolve_rva(0x04731130));
        inline app::IPolygon__Class* get_class() {
            return il2cpp::get_class<app::IPolygon__Class>(type_info, "TriangleNet.Geometry", "IPolygon");
        }
    } // namespace IPolygon
} // namespace app::classes::types
