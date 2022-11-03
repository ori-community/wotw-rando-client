#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoveCameraToPlayerAction {
        namespace {
            inline app::MoveCameraToPlayerAction__Class* type_info_ref = nullptr;
        }
        inline app::MoveCameraToPlayerAction__Class** type_info = &type_info_ref;
        inline app::MoveCameraToPlayerAction__Class* get_class() {
            return il2cpp::get_class<app::MoveCameraToPlayerAction__Class>(type_info, "", "MoveCameraToPlayerAction");
        }
        inline app::MoveCameraToPlayerAction* create() {
            return il2cpp::create_object<app::MoveCameraToPlayerAction>(get_class());
        }
    } // namespace MoveCameraToPlayerAction
} // namespace app::classes::types
