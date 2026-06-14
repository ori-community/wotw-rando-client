#pragma once
#include <Modloader/app/structs/LightCanvasStateController_LightCanvasState.h>
#include <Modloader/app/structs/LightCanvasStateController_LightCanvasState__Array.h>
#include <Modloader/app/structs/LightCanvasStateController_LightCanvasState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightCanvasStateController_LightCanvasState {
        inline app::LightCanvasStateController_LightCanvasState__Class** type_info() {
            static app::LightCanvasStateController_LightCanvasState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LightCanvasStateController_LightCanvasState__Class**)(modloader::win::memory::resolve_rva(0x04718870));
            }
            return cache;
        }
        inline app::LightCanvasStateController_LightCanvasState__Class* get_class() {
            return il2cpp::get_nested_class<app::LightCanvasStateController_LightCanvasState__Class>(type_info(), "", "LightCanvasStateController", "LightCanvasState");
        }
        inline app::LightCanvasStateController_LightCanvasState* create() {
            return il2cpp::create_object<app::LightCanvasStateController_LightCanvasState>(get_class());
        }
        inline app::LightCanvasStateController_LightCanvasState__Array* create_array(int size) {
            return il2cpp::array_new<app::LightCanvasStateController_LightCanvasState__Array>(get_class(), size);
        }
        inline app::LightCanvasStateController_LightCanvasState__Array* create_array(const std::vector<app::LightCanvasStateController_LightCanvasState*>& items) {
            return il2cpp::array_new<app::LightCanvasStateController_LightCanvasState__Array>(get_class(), items);
        }
    } // namespace LightCanvasStateController_LightCanvasState
} // namespace app::classes::types
