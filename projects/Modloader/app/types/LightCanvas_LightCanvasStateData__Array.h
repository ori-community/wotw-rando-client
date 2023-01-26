#pragma once
#include <Modloader/app/structs/LightCanvas_LightCanvasStateData__Array.h>
#include <Modloader/app/structs/LightCanvas_LightCanvasStateData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightCanvas_LightCanvasStateData__Array {
        inline app::LightCanvas_LightCanvasStateData__Array__Class** type_info() {
            static app::LightCanvas_LightCanvasStateData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightCanvas_LightCanvasStateData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightCanvas_LightCanvasStateData__Array__Class* get_class() {
            return il2cpp::get_class<app::LightCanvas_LightCanvasStateData__Array__Class>(type_info(), "", "LightCanvas+LightCanvasStateData[]");
        }
        inline app::LightCanvas_LightCanvasStateData__Array* create() {
            return il2cpp::create_object<app::LightCanvas_LightCanvasStateData__Array>(get_class());
        }
    } // namespace LightCanvas_LightCanvasStateData__Array
} // namespace app::classes::types
