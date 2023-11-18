#pragma once
#include <Modloader/app/structs/BushSetupController.h>
#include <Modloader/app/structs/BushSetupController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BushSetupController {
        inline app::BushSetupController__Class** type_info() {
            static app::BushSetupController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BushSetupController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BushSetupController__Class* get_class() {
            return il2cpp::get_class<app::BushSetupController__Class>(type_info(), "", "BushSetupController");
        }
        inline app::BushSetupController* create() {
            return il2cpp::create_object<app::BushSetupController>(get_class());
        }
    } // namespace BushSetupController
} // namespace app::classes::types
