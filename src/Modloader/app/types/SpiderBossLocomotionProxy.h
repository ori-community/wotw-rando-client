#pragma once
#include <Modloader/app/structs/SpiderBossLocomotionProxy.h>
#include <Modloader/app/structs/SpiderBossLocomotionProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocomotionProxy {
        inline app::SpiderBossLocomotionProxy__Class** type_info() {
            static app::SpiderBossLocomotionProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossLocomotionProxy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossLocomotionProxy__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocomotionProxy__Class>(type_info(), "", "SpiderBossLocomotionProxy");
        }
        inline app::SpiderBossLocomotionProxy* create() {
            return il2cpp::create_object<app::SpiderBossLocomotionProxy>(get_class());
        }
    } // namespace SpiderBossLocomotionProxy
} // namespace app::classes::types
