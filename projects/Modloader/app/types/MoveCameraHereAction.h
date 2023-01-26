#pragma once
#include <Modloader/app/structs/MoveCameraHereAction.h>
#include <Modloader/app/structs/MoveCameraHereAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoveCameraHereAction {
        inline app::MoveCameraHereAction__Class** type_info() {
            static app::MoveCameraHereAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoveCameraHereAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoveCameraHereAction__Class* get_class() {
            return il2cpp::get_class<app::MoveCameraHereAction__Class>(type_info(), "", "MoveCameraHereAction");
        }
        inline app::MoveCameraHereAction* create() {
            return il2cpp::create_object<app::MoveCameraHereAction>(get_class());
        }
    } // namespace MoveCameraHereAction
} // namespace app::classes::types
