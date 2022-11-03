#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Polygon {
        inline app::Polygon__Class** type_info = (app::Polygon__Class**)(modloader::win::memory::resolve_rva(0x04753BF0));
        inline app::Polygon__Class* get_class() {
            return il2cpp::get_class<app::Polygon__Class>(type_info, "TriangleNet.Geometry", "Polygon");
        }
        inline app::Polygon* create() {
            return il2cpp::create_object<app::Polygon>(get_class());
        }
    } // namespace Polygon
} // namespace app::classes::types
