#pragma once
#include <Modloader/app/structs/CatAndMouseRoomTimerController.h>
#include <Modloader/app/structs/CatAndMouseRoomTimerController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CatAndMouseRoomTimerController {
        inline app::CatAndMouseRoomTimerController__Class** type_info() {
            static app::CatAndMouseRoomTimerController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CatAndMouseRoomTimerController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CatAndMouseRoomTimerController__Class* get_class() {
            return il2cpp::get_class<app::CatAndMouseRoomTimerController__Class>(type_info(), "", "CatAndMouseRoomTimerController");
        }
        inline app::CatAndMouseRoomTimerController* create() {
            return il2cpp::create_object<app::CatAndMouseRoomTimerController>(get_class());
        }
    } // namespace CatAndMouseRoomTimerController
} // namespace app::classes::types
