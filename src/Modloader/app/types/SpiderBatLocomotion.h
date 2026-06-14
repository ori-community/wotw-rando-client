#pragma once
#include <Modloader/app/structs/SpiderBatLocomotion.h>
#include <Modloader/app/structs/SpiderBatLocomotion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBatLocomotion {
        inline app::SpiderBatLocomotion__Class** type_info() {
            static app::SpiderBatLocomotion__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBatLocomotion__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBatLocomotion__Class* get_class() {
            return il2cpp::get_class<app::SpiderBatLocomotion__Class>(type_info(), "", "SpiderBatLocomotion");
        }
        inline app::SpiderBatLocomotion* create() {
            return il2cpp::create_object<app::SpiderBatLocomotion>(get_class());
        }
    } // namespace SpiderBatLocomotion
} // namespace app::classes::types
