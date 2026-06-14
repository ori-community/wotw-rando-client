#pragma once
#include <Modloader/app/structs/RotatingRoomController.h>
#include <Modloader/app/structs/RotatingRoomController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RotatingRoomController {
        inline app::RotatingRoomController__Class** type_info() {
            static app::RotatingRoomController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RotatingRoomController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RotatingRoomController__Class* get_class() {
            return il2cpp::get_class<app::RotatingRoomController__Class>(type_info(), "", "RotatingRoomController");
        }
        inline app::RotatingRoomController* create() {
            return il2cpp::create_object<app::RotatingRoomController>(get_class());
        }
    } // namespace RotatingRoomController
} // namespace app::classes::types
