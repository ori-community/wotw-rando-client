#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderBossLocomotionTurningBehaviour__Class.h>
#include <Modloader/app/structs/SpiderBossLocomotionTurningBehaviour.h>

namespace app::classes::types {
    namespace SpiderBossLocomotionTurningBehaviour {
        namespace {
            inline app::SpiderBossLocomotionTurningBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossLocomotionTurningBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBossLocomotionTurningBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocomotionTurningBehaviour__Class>(type_info, "", "SpiderBossLocomotionTurningBehaviour");
        }
        inline app::SpiderBossLocomotionTurningBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossLocomotionTurningBehaviour>(get_class());
        }
    } // namespace SpiderBossLocomotionTurningBehaviour
} // namespace app::classes::types
