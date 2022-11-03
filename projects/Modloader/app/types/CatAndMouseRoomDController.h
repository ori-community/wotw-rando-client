#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CatAndMouseRoomDController {
        namespace {
            inline app::CatAndMouseRoomDController__Class* type_info_ref = nullptr;
        }
        inline app::CatAndMouseRoomDController__Class** type_info = &type_info_ref;
        inline app::CatAndMouseRoomDController__Class* get_class() {
            return il2cpp::get_class<app::CatAndMouseRoomDController__Class>(type_info, "", "CatAndMouseRoomDController");
        }
        inline app::CatAndMouseRoomDController* create() {
            return il2cpp::create_object<app::CatAndMouseRoomDController>(get_class());
        }
    } // namespace CatAndMouseRoomDController
} // namespace app::classes::types
