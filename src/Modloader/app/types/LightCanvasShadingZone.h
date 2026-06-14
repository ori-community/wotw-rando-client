#pragma once
#include <Modloader/app/structs/LightCanvasShadingZone.h>
#include <Modloader/app/structs/LightCanvasShadingZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightCanvasShadingZone {
        inline app::LightCanvasShadingZone__Class** type_info() {
            static app::LightCanvasShadingZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightCanvasShadingZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightCanvasShadingZone__Class* get_class() {
            return il2cpp::get_class<app::LightCanvasShadingZone__Class>(type_info(), "", "LightCanvasShadingZone");
        }
        inline app::LightCanvasShadingZone* create() {
            return il2cpp::create_object<app::LightCanvasShadingZone>(get_class());
        }
    } // namespace LightCanvasShadingZone
} // namespace app::classes::types
