#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CatAndMouseRoomTimerController {
        namespace {
            inline app::CatAndMouseRoomTimerController__Class* type_info_ref = nullptr;
        }
        inline app::CatAndMouseRoomTimerController__Class** type_info = &type_info_ref;
        inline app::CatAndMouseRoomTimerController__Class* get_class() {
            return il2cpp::get_class<app::CatAndMouseRoomTimerController__Class>(type_info, "", "CatAndMouseRoomTimerController");
        }
        inline app::CatAndMouseRoomTimerController* create() {
            return il2cpp::create_object<app::CatAndMouseRoomTimerController>(get_class());
        }
    } // namespace CatAndMouseRoomTimerController
} // namespace app::classes::types
