#pragma once
#include <Modloader/app/structs/LightCanvasStateController.h>
#include <Modloader/app/structs/LightCanvasStateController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightCanvasStateController {
        inline app::LightCanvasStateController__Class** type_info() {
            static app::LightCanvasStateController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightCanvasStateController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightCanvasStateController__Class* get_class() {
            return il2cpp::get_class<app::LightCanvasStateController__Class>(type_info(), "", "LightCanvasStateController");
        }
        inline app::LightCanvasStateController* create() {
            return il2cpp::create_object<app::LightCanvasStateController>(get_class());
        }
    } // namespace LightCanvasStateController
} // namespace app::classes::types
