#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightCanvasStateController_LightCanvasState__Array {
        namespace {
            app::LightCanvasStateController_LightCanvasState__Array__Class* type_info_ref = nullptr;
        }
        app::LightCanvasStateController_LightCanvasState__Array__Class** type_info = &type_info_ref;
        inline app::LightCanvasStateController_LightCanvasState__Array__Class* get_class() {
            return il2cpp::get_class<app::LightCanvasStateController_LightCanvasState__Array__Class>(type_info, "", "LightCanvasStateController+LightCanvasState[]");
        }
        inline app::LightCanvasStateController_LightCanvasState__Array* create() {
            return il2cpp::create_object<app::LightCanvasStateController_LightCanvasState__Array>(get_class());
        }
    } // namespace LightCanvasStateController_LightCanvasState__Array
} // namespace app::classes::types
