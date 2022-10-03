#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlatformMovementEnvironmentForceController {
        namespace {
            app::PlatformMovementEnvironmentForceController__Class* type_info_ref = nullptr;
        }
        app::PlatformMovementEnvironmentForceController__Class** type_info = &type_info_ref;
        inline app::PlatformMovementEnvironmentForceController__Class* get_class() {
            return il2cpp::get_class<app::PlatformMovementEnvironmentForceController__Class>(type_info, "", "PlatformMovementEnvironmentForceController");
        }
        inline app::PlatformMovementEnvironmentForceController* create() {
            return il2cpp::create_object<app::PlatformMovementEnvironmentForceController>(get_class());
        }
    } // namespace PlatformMovementEnvironmentForceController
} // namespace app::classes::types
