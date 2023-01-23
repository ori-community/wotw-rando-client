#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IPolygonFormat__Class.h>

namespace app::classes::types {
    namespace IPolygonFormat {
        inline app::IPolygonFormat__Class** type_info = (app::IPolygonFormat__Class**)(modloader::win::memory::resolve_rva(0x04750590));
        inline app::IPolygonFormat__Class* get_class() {
            return il2cpp::get_class<app::IPolygonFormat__Class>(type_info, "TriangleNet.IO", "IPolygonFormat");
        }
    } // namespace IPolygonFormat
} // namespace app::classes::types
