#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ChangeChaseCameraZoomOffsetAction__Class.h>
#include <Modloader/app/structs/ChangeChaseCameraZoomOffsetAction.h>

namespace app::classes::types {
    namespace ChangeChaseCameraZoomOffsetAction {
        namespace {
            inline app::ChangeChaseCameraZoomOffsetAction__Class* type_info_ref = nullptr;
        }
        inline app::ChangeChaseCameraZoomOffsetAction__Class** type_info = &type_info_ref;
        inline app::ChangeChaseCameraZoomOffsetAction__Class* get_class() {
            return il2cpp::get_class<app::ChangeChaseCameraZoomOffsetAction__Class>(type_info, "", "ChangeChaseCameraZoomOffsetAction");
        }
        inline app::ChangeChaseCameraZoomOffsetAction* create() {
            return il2cpp::create_object<app::ChangeChaseCameraZoomOffsetAction>(get_class());
        }
    } // namespace ChangeChaseCameraZoomOffsetAction
} // namespace app::classes::types
