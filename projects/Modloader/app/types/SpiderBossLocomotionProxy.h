#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderBossLocomotionProxy {
        namespace {
            inline app::SpiderBossLocomotionProxy__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossLocomotionProxy__Class** type_info = &type_info_ref;
        inline app::SpiderBossLocomotionProxy__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocomotionProxy__Class>(type_info, "", "SpiderBossLocomotionProxy");
        }
        inline app::SpiderBossLocomotionProxy* create() {
            return il2cpp::create_object<app::SpiderBossLocomotionProxy>(get_class());
        }
    } // namespace SpiderBossLocomotionProxy
} // namespace app::classes::types
