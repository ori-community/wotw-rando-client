#pragma once
#include <Modloader/app/structs/SimpleFPSController.h>
#include <Modloader/app/structs/SimpleFPSController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleFPSController {
        inline app::SimpleFPSController__Class** type_info() {
            static app::SimpleFPSController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SimpleFPSController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SimpleFPSController__Class* get_class() {
            return il2cpp::get_class<app::SimpleFPSController__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "SimpleFPSController");
        }
        inline app::SimpleFPSController* create() {
            return il2cpp::create_object<app::SimpleFPSController>(get_class());
        }
    } // namespace SimpleFPSController
} // namespace app::classes::types
