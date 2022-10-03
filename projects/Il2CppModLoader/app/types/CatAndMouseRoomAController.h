#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CatAndMouseRoomAController {
        namespace {
            app::CatAndMouseRoomAController__Class* type_info_ref = nullptr;
        }
        app::CatAndMouseRoomAController__Class** type_info = &type_info_ref;
        inline app::CatAndMouseRoomAController__Class* get_class() {
            return il2cpp::get_class<app::CatAndMouseRoomAController__Class>(type_info, "", "CatAndMouseRoomAController");
        }
        inline app::CatAndMouseRoomAController* create() {
            return il2cpp::create_object<app::CatAndMouseRoomAController>(get_class());
        }
    } // namespace CatAndMouseRoomAController
} // namespace app::classes::types
