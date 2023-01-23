#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RollingRockParticlesController__Class.h>
#include <Modloader/app/structs/RollingRockParticlesController.h>

namespace app::classes::types {
    namespace RollingRockParticlesController {
        namespace {
            inline app::RollingRockParticlesController__Class* type_info_ref = nullptr;
        }
        inline app::RollingRockParticlesController__Class** type_info = &type_info_ref;
        inline app::RollingRockParticlesController__Class* get_class() {
            return il2cpp::get_class<app::RollingRockParticlesController__Class>(type_info, "", "RollingRockParticlesController");
        }
        inline app::RollingRockParticlesController* create() {
            return il2cpp::create_object<app::RollingRockParticlesController>(get_class());
        }
    } // namespace RollingRockParticlesController
} // namespace app::classes::types
