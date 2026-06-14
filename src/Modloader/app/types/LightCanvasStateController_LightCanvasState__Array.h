#pragma once
#include <Modloader/app/structs/LightCanvasStateController_LightCanvasState__Array.h>
#include <Modloader/app/structs/LightCanvasStateController_LightCanvasState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightCanvasStateController_LightCanvasState__Array {
        inline app::LightCanvasStateController_LightCanvasState__Array__Class** type_info() {
            static app::LightCanvasStateController_LightCanvasState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightCanvasStateController_LightCanvasState__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightCanvasStateController_LightCanvasState__Array__Class* get_class() {
            return il2cpp::get_class<app::LightCanvasStateController_LightCanvasState__Array__Class>(type_info(), "", "LightCanvasStateController+LightCanvasState[]");
        }
        inline app::LightCanvasStateController_LightCanvasState__Array* create() {
            return il2cpp::create_object<app::LightCanvasStateController_LightCanvasState__Array>(get_class());
        }
    } // namespace LightCanvasStateController_LightCanvasState__Array
} // namespace app::classes::types
