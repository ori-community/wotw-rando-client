#pragma once
#include <Modloader/app/structs/CaveSleepController.h>
#include <Modloader/app/structs/CaveSleepController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CaveSleepController {
        inline app::CaveSleepController__Class** type_info() {
            static app::CaveSleepController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CaveSleepController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CaveSleepController__Class* get_class() {
            return il2cpp::get_class<app::CaveSleepController__Class>(type_info(), "", "CaveSleepController");
        }
        inline app::CaveSleepController* create() {
            return il2cpp::create_object<app::CaveSleepController>(get_class());
        }
    } // namespace CaveSleepController
} // namespace app::classes::types
