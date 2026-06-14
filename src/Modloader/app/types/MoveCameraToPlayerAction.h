#pragma once
#include <Modloader/app/structs/MoveCameraToPlayerAction.h>
#include <Modloader/app/structs/MoveCameraToPlayerAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoveCameraToPlayerAction {
        inline app::MoveCameraToPlayerAction__Class** type_info() {
            static app::MoveCameraToPlayerAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoveCameraToPlayerAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoveCameraToPlayerAction__Class* get_class() {
            return il2cpp::get_class<app::MoveCameraToPlayerAction__Class>(type_info(), "", "MoveCameraToPlayerAction");
        }
        inline app::MoveCameraToPlayerAction* create() {
            return il2cpp::create_object<app::MoveCameraToPlayerAction>(get_class());
        }
    } // namespace MoveCameraToPlayerAction
} // namespace app::classes::types
