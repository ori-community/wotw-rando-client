#pragma once
#include <Modloader/app/structs/RotateRoomAction.h>
#include <Modloader/app/structs/RotateRoomAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RotateRoomAction {
        inline app::RotateRoomAction__Class** type_info() {
            static app::RotateRoomAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RotateRoomAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RotateRoomAction__Class* get_class() {
            return il2cpp::get_class<app::RotateRoomAction__Class>(type_info(), "", "RotateRoomAction");
        }
        inline app::RotateRoomAction* create() {
            return il2cpp::create_object<app::RotateRoomAction>(get_class());
        }
    } // namespace RotateRoomAction
} // namespace app::classes::types
