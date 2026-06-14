#pragma once
#include <Modloader/app/structs/HealthController.h>
#include <Modloader/app/structs/HealthController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HealthController {
        inline app::HealthController__Class** type_info() {
            static app::HealthController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HealthController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HealthController__Class* get_class() {
            return il2cpp::get_class<app::HealthController__Class>(type_info(), "", "HealthController");
        }
        inline app::HealthController* create() {
            return il2cpp::create_object<app::HealthController>(get_class());
        }
    } // namespace HealthController
} // namespace app::classes::types
