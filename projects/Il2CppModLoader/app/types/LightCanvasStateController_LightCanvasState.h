#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightCanvasStateController_LightCanvasState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LightCanvasStateController_LightCanvasState__Class** type_info;
        inline app::LightCanvasStateController_LightCanvasState__Class* get_class() {
            return il2cpp::get_nested_class<app::LightCanvasStateController_LightCanvasState__Class>(type_info, "", "LightCanvasStateController", "LightCanvasState");
        }
        inline app::LightCanvasStateController_LightCanvasState* create() {
            return il2cpp::create_object<app::LightCanvasStateController_LightCanvasState>(get_class());
        }
        inline app::LightCanvasStateController_LightCanvasState__Array* create_array(int size) {
            return il2cpp::array_new<app::LightCanvasStateController_LightCanvasState__Array>(get_class(), size);
        }
    } // namespace LightCanvasStateController_LightCanvasState
} // namespace app::classes::types
