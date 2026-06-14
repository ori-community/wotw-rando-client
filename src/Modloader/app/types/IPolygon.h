#pragma once
#include <Modloader/app/structs/IPolygon.h>
#include <Modloader/app/structs/IPolygon__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPolygon {
        inline app::IPolygon__Class** type_info() {
            static app::IPolygon__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPolygon__Class**)(modloader::win::memory::resolve_rva(0x04731130));
            }
            return cache;
        }
        inline app::IPolygon__Class* get_class() {
            return il2cpp::get_class<app::IPolygon__Class>(type_info(), "TriangleNet.Geometry", "IPolygon");
        }
    } // namespace IPolygon
} // namespace app::classes::types
