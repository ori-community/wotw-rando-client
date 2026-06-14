#pragma once
#include <Modloader/app/structs/BabySeinController.h>
#include <Modloader/app/structs/BabySeinController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BabySeinController {
        inline app::BabySeinController__Class** type_info() {
            static app::BabySeinController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BabySeinController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BabySeinController__Class* get_class() {
            return il2cpp::get_class<app::BabySeinController__Class>(type_info(), "", "BabySeinController");
        }
        inline app::BabySeinController* create() {
            return il2cpp::create_object<app::BabySeinController>(get_class());
        }
    } // namespace BabySeinController
} // namespace app::classes::types
