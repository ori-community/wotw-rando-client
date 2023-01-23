#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoveCameraHereAction__Class.h>
#include <Modloader/app/structs/MoveCameraHereAction.h>

namespace app::classes::types {
    namespace MoveCameraHereAction {
        namespace {
            inline app::MoveCameraHereAction__Class* type_info_ref = nullptr;
        }
        inline app::MoveCameraHereAction__Class** type_info = &type_info_ref;
        inline app::MoveCameraHereAction__Class* get_class() {
            return il2cpp::get_class<app::MoveCameraHereAction__Class>(type_info, "", "MoveCameraHereAction");
        }
        inline app::MoveCameraHereAction* create() {
            return il2cpp::create_object<app::MoveCameraHereAction>(get_class());
        }
    } // namespace MoveCameraHereAction
} // namespace app::classes::types
