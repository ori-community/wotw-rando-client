#pragma once
#include <Modloader/app/structs/CatAndMouseRoomCController.h>
#include <Modloader/app/structs/CatAndMouseRoomCController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CatAndMouseRoomCController {
        inline app::CatAndMouseRoomCController__Class** type_info() {
            static app::CatAndMouseRoomCController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CatAndMouseRoomCController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CatAndMouseRoomCController__Class* get_class() {
            return il2cpp::get_class<app::CatAndMouseRoomCController__Class>(type_info(), "", "CatAndMouseRoomCController");
        }
        inline app::CatAndMouseRoomCController* create() {
            return il2cpp::create_object<app::CatAndMouseRoomCController>(get_class());
        }
    } // namespace CatAndMouseRoomCController
} // namespace app::classes::types
