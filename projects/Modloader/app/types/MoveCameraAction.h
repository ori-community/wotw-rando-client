#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoveCameraAction__Class.h>
#include <Modloader/app/structs/MoveCameraAction.h>

namespace app::classes::types {
    namespace MoveCameraAction {
        namespace {
            inline app::MoveCameraAction__Class* type_info_ref = nullptr;
        }
        inline app::MoveCameraAction__Class** type_info = &type_info_ref;
        inline app::MoveCameraAction__Class* get_class() {
            return il2cpp::get_class<app::MoveCameraAction__Class>(type_info, "", "MoveCameraAction");
        }
        inline app::MoveCameraAction* create() {
            return il2cpp::create_object<app::MoveCameraAction>(get_class());
        }
    } // namespace MoveCameraAction
} // namespace app::classes::types
