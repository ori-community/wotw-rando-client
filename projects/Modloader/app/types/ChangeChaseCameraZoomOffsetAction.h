#pragma once
#include <Modloader/app/structs/ChangeChaseCameraZoomOffsetAction.h>
#include <Modloader/app/structs/ChangeChaseCameraZoomOffsetAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChangeChaseCameraZoomOffsetAction {
        inline app::ChangeChaseCameraZoomOffsetAction__Class** type_info() {
            static app::ChangeChaseCameraZoomOffsetAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChangeChaseCameraZoomOffsetAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChangeChaseCameraZoomOffsetAction__Class* get_class() {
            return il2cpp::get_class<app::ChangeChaseCameraZoomOffsetAction__Class>(type_info(), "", "ChangeChaseCameraZoomOffsetAction");
        }
        inline app::ChangeChaseCameraZoomOffsetAction* create() {
            return il2cpp::create_object<app::ChangeChaseCameraZoomOffsetAction>(get_class());
        }
    } // namespace ChangeChaseCameraZoomOffsetAction
} // namespace app::classes::types
