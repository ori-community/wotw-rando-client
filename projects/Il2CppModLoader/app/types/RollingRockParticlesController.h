#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RollingRockParticlesController {
        namespace {
            app::RollingRockParticlesController__Class* type_info_ref = nullptr;
        }
        app::RollingRockParticlesController__Class** type_info = &type_info_ref;
        inline app::RollingRockParticlesController__Class* get_class() {
            return il2cpp::get_class<app::RollingRockParticlesController__Class>(type_info, "", "RollingRockParticlesController");
        }
        inline app::RollingRockParticlesController* create() {
            return il2cpp::create_object<app::RollingRockParticlesController>(get_class());
        }
    } // namespace RollingRockParticlesController
} // namespace app::classes::types
