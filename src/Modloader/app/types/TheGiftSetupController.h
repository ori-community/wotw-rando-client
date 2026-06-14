#pragma once
#include <Modloader/app/structs/TheGiftSetupController.h>
#include <Modloader/app/structs/TheGiftSetupController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TheGiftSetupController {
        inline app::TheGiftSetupController__Class** type_info() {
            static app::TheGiftSetupController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TheGiftSetupController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TheGiftSetupController__Class* get_class() {
            return il2cpp::get_class<app::TheGiftSetupController__Class>(type_info(), "", "TheGiftSetupController");
        }
        inline app::TheGiftSetupController* create() {
            return il2cpp::create_object<app::TheGiftSetupController>(get_class());
        }
    } // namespace TheGiftSetupController
} // namespace app::classes::types
