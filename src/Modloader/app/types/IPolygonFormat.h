#pragma once
#include <Modloader/app/structs/IPolygonFormat.h>
#include <Modloader/app/structs/IPolygonFormat__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPolygonFormat {
        inline app::IPolygonFormat__Class** type_info() {
            static app::IPolygonFormat__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPolygonFormat__Class**)(modloader::win::memory::resolve_rva(0x04750590));
            }
            return cache;
        }
        inline app::IPolygonFormat__Class* get_class() {
            return il2cpp::get_class<app::IPolygonFormat__Class>(type_info(), "TriangleNet.IO", "IPolygonFormat");
        }
    } // namespace IPolygonFormat
} // namespace app::classes::types
