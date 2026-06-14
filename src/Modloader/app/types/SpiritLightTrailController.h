#pragma once
#include <Modloader/app/structs/SpiritLightTrailController.h>
#include <Modloader/app/structs/SpiritLightTrailController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritLightTrailController {
        inline app::SpiritLightTrailController__Class** type_info() {
            static app::SpiritLightTrailController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritLightTrailController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritLightTrailController__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightTrailController__Class>(type_info(), "", "SpiritLightTrailController");
        }
        inline app::SpiritLightTrailController* create() {
            return il2cpp::create_object<app::SpiritLightTrailController>(get_class());
        }
    } // namespace SpiritLightTrailController
} // namespace app::classes::types
