#pragma once
#include <Modloader/app/structs/Polygon.h>
#include <Modloader/app/structs/Polygon__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Polygon {
        inline app::Polygon__Class** type_info() {
            static app::Polygon__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Polygon__Class**)(modloader::win::memory::resolve_rva(0x04753BF0));
            }
            return cache;
        }
        inline app::Polygon__Class* get_class() {
            return il2cpp::get_class<app::Polygon__Class>(type_info(), "TriangleNet.Geometry", "Polygon");
        }
        inline app::Polygon* create() {
            return il2cpp::create_object<app::Polygon>(get_class());
        }
    } // namespace Polygon
} // namespace app::classes::types
