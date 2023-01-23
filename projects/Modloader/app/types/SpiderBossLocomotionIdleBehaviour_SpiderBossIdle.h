#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderBossLocomotionIdleBehaviour_SpiderBossIdle__Class.h>
#include <Modloader/app/structs/SpiderBossLocomotionIdleBehaviour_SpiderBossIdle.h>

namespace app::classes::types {
    namespace SpiderBossLocomotionIdleBehaviour_SpiderBossIdle {
        namespace {
            inline app::SpiderBossLocomotionIdleBehaviour_SpiderBossIdle__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossLocomotionIdleBehaviour_SpiderBossIdle__Class** type_info = &type_info_ref;
        inline app::SpiderBossLocomotionIdleBehaviour_SpiderBossIdle__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBossLocomotionIdleBehaviour_SpiderBossIdle__Class>(type_info, "", "SpiderBossLocomotionIdleBehaviour", "SpiderBossIdle");
        }
        inline app::SpiderBossLocomotionIdleBehaviour_SpiderBossIdle* create() {
            return il2cpp::create_object<app::SpiderBossLocomotionIdleBehaviour_SpiderBossIdle>(get_class());
        }
    } // namespace SpiderBossLocomotionIdleBehaviour_SpiderBossIdle
} // namespace app::classes::types
