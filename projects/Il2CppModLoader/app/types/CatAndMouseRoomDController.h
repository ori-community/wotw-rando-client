#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CatAndMouseRoomDController {
        namespace {
            app::CatAndMouseRoomDController__Class* type_info_ref = nullptr;
        }
        app::CatAndMouseRoomDController__Class** type_info = &type_info_ref;
        inline app::CatAndMouseRoomDController__Class* get_class() {
            return il2cpp::get_class<app::CatAndMouseRoomDController__Class>(type_info, "", "CatAndMouseRoomDController");
        }
        inline app::CatAndMouseRoomDController* create() {
            return il2cpp::create_object<app::CatAndMouseRoomDController>(get_class());
        }
    } // namespace CatAndMouseRoomDController
} // namespace app::classes::types
