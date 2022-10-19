#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPolygonFormat {
        inline app::IPolygonFormat__Class** type_info = (app::IPolygonFormat__Class**)(modloader::win::memory::resolve_rva(0x04750590));
        inline app::IPolygonFormat__Class* get_class() {
            return il2cpp::get_class<app::IPolygonFormat__Class>(type_info, "TriangleNet.IO", "IPolygonFormat");
        }
    } // namespace IPolygonFormat
} // namespace app::classes::types
