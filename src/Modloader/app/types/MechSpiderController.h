#pragma once
#include <Modloader/app/structs/MechSpiderController.h>
#include <Modloader/app/structs/MechSpiderController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MechSpiderController {
        inline app::MechSpiderController__Class** type_info() {
            static app::MechSpiderController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MechSpiderController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MechSpiderController__Class* get_class() {
            return il2cpp::get_class<app::MechSpiderController__Class>(type_info(), "RootMotion.Demos", "MechSpiderController");
        }
        inline app::MechSpiderController* create() {
            return il2cpp::create_object<app::MechSpiderController>(get_class());
        }
    } // namespace MechSpiderController
} // namespace app::classes::types
