#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CatAndMouseRoomAController__Class.h>
#include <Modloader/app/structs/CatAndMouseRoomAController.h>

namespace app::classes::types {
    namespace CatAndMouseRoomAController {
        namespace {
            inline app::CatAndMouseRoomAController__Class* type_info_ref = nullptr;
        }
        inline app::CatAndMouseRoomAController__Class** type_info = &type_info_ref;
        inline app::CatAndMouseRoomAController__Class* get_class() {
            return il2cpp::get_class<app::CatAndMouseRoomAController__Class>(type_info, "", "CatAndMouseRoomAController");
        }
        inline app::CatAndMouseRoomAController* create() {
            return il2cpp::create_object<app::CatAndMouseRoomAController>(get_class());
        }
    } // namespace CatAndMouseRoomAController
} // namespace app::classes::types
