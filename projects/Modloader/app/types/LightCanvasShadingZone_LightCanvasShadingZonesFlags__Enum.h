#pragma once
#include <Modloader/app/structs/LightCanvasShadingZone_LightCanvasShadingZonesFlags__Enum.h>
#include <Modloader/app/structs/LightCanvasShadingZone_LightCanvasShadingZonesFlags__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightCanvasShadingZone_LightCanvasShadingZonesFlags__Enum {
        inline app::LightCanvasShadingZone_LightCanvasShadingZonesFlags__Enum__Class** type_info() {
            static app::LightCanvasShadingZone_LightCanvasShadingZonesFlags__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightCanvasShadingZone_LightCanvasShadingZonesFlags__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightCanvasShadingZone_LightCanvasShadingZonesFlags__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LightCanvasShadingZone_LightCanvasShadingZonesFlags__Enum__Class>(type_info(), "", "LightCanvasShadingZone", "LightCanvasShadingZonesFlags");
        }
        inline app::LightCanvasShadingZone_LightCanvasShadingZonesFlags__Enum* create() {
            return il2cpp::create_object<app::LightCanvasShadingZone_LightCanvasShadingZonesFlags__Enum>(get_class());
        }
    } // namespace LightCanvasShadingZone_LightCanvasShadingZonesFlags__Enum
} // namespace app::classes::types
