#pragma once
#include <Modloader/app/structs/Polygon_ShapeData.h>
#include <Modloader/app/structs/Polygon_ShapeData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Polygon_ShapeData {
        inline app::Polygon_ShapeData__Class** type_info() {
            static app::Polygon_ShapeData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Polygon_ShapeData__Class**)(modloader::win::memory::resolve_rva(0x04708120));
            }
            return cache;
        }
        inline app::Polygon_ShapeData__Class* get_class() {
            return il2cpp::get_nested_class<app::Polygon_ShapeData__Class>(type_info(), "", "Polygon", "ShapeData");
        }
        inline app::Polygon_ShapeData* create() {
            return il2cpp::create_object<app::Polygon_ShapeData>(get_class());
        }
    } // namespace Polygon_ShapeData
} // namespace app::classes::types
