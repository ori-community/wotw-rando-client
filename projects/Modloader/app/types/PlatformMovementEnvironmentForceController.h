#pragma once
#include <Modloader/app/structs/PlatformMovementEnvironmentForceController.h>
#include <Modloader/app/structs/PlatformMovementEnvironmentForceController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlatformMovementEnvironmentForceController {
        inline app::PlatformMovementEnvironmentForceController__Class** type_info() {
            static app::PlatformMovementEnvironmentForceController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlatformMovementEnvironmentForceController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlatformMovementEnvironmentForceController__Class* get_class() {
            return il2cpp::get_class<app::PlatformMovementEnvironmentForceController__Class>(type_info(), "", "PlatformMovementEnvironmentForceController");
        }
        inline app::PlatformMovementEnvironmentForceController* create() {
            return il2cpp::create_object<app::PlatformMovementEnvironmentForceController>(get_class());
        }
    } // namespace PlatformMovementEnvironmentForceController
} // namespace app::classes::types
