#pragma once
#include <Modloader/app/structs/CatAndMouseRoomDController.h>
#include <Modloader/app/structs/CatAndMouseRoomDController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CatAndMouseRoomDController {
        inline app::CatAndMouseRoomDController__Class** type_info() {
            static app::CatAndMouseRoomDController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CatAndMouseRoomDController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CatAndMouseRoomDController__Class* get_class() {
            return il2cpp::get_class<app::CatAndMouseRoomDController__Class>(type_info(), "", "CatAndMouseRoomDController");
        }
        inline app::CatAndMouseRoomDController* create() {
            return il2cpp::create_object<app::CatAndMouseRoomDController>(get_class());
        }
    } // namespace CatAndMouseRoomDController
} // namespace app::classes::types
