#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TheGiftSetupController {
        namespace {
            app::TheGiftSetupController__Class* type_info_ref = nullptr;
        }
        app::TheGiftSetupController__Class** type_info = &type_info_ref;
        inline app::TheGiftSetupController__Class* get_class() {
            return il2cpp::get_class<app::TheGiftSetupController__Class>(type_info, "", "TheGiftSetupController");
        }
        inline app::TheGiftSetupController* create() {
            return il2cpp::create_object<app::TheGiftSetupController>(get_class());
        }
    } // namespace TheGiftSetupController
} // namespace app::classes::types
