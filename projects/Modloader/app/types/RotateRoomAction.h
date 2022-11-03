#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RotateRoomAction {
        namespace {
            inline app::RotateRoomAction__Class* type_info_ref = nullptr;
        }
        inline app::RotateRoomAction__Class** type_info = &type_info_ref;
        inline app::RotateRoomAction__Class* get_class() {
            return il2cpp::get_class<app::RotateRoomAction__Class>(type_info, "", "RotateRoomAction");
        }
        inline app::RotateRoomAction* create() {
            return il2cpp::create_object<app::RotateRoomAction>(get_class());
        }
    } // namespace RotateRoomAction
} // namespace app::classes::types
