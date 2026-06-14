#pragma once
#include <Modloader/app/structs/CatAndMouseRoomAController.h>
#include <Modloader/app/structs/CatAndMouseRoomAController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CatAndMouseRoomAController {
        inline app::CatAndMouseRoomAController__Class** type_info() {
            static app::CatAndMouseRoomAController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CatAndMouseRoomAController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CatAndMouseRoomAController__Class* get_class() {
            return il2cpp::get_class<app::CatAndMouseRoomAController__Class>(type_info(), "", "CatAndMouseRoomAController");
        }
        inline app::CatAndMouseRoomAController* create() {
            return il2cpp::create_object<app::CatAndMouseRoomAController>(get_class());
        }
    } // namespace CatAndMouseRoomAController
} // namespace app::classes::types
