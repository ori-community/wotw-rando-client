#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MovingPlatformController__Class.h>
#include <Modloader/app/structs/MovingPlatformController.h>

namespace app::classes::types {
    namespace MovingPlatformController {
        namespace {
            inline app::MovingPlatformController__Class* type_info_ref = nullptr;
        }
        inline app::MovingPlatformController__Class** type_info = &type_info_ref;
        inline app::MovingPlatformController__Class* get_class() {
            return il2cpp::get_class<app::MovingPlatformController__Class>(type_info, "", "MovingPlatformController");
        }
        inline app::MovingPlatformController* create() {
            return il2cpp::create_object<app::MovingPlatformController>(get_class());
        }
    } // namespace MovingPlatformController
} // namespace app::classes::types
