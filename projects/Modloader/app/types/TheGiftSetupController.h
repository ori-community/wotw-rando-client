#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TheGiftSetupController {
        namespace {
            inline app::TheGiftSetupController__Class* type_info_ref = nullptr;
        }
        inline app::TheGiftSetupController__Class** type_info = &type_info_ref;
        inline app::TheGiftSetupController__Class* get_class() {
            return il2cpp::get_class<app::TheGiftSetupController__Class>(type_info, "", "TheGiftSetupController");
        }
        inline app::TheGiftSetupController* create() {
            return il2cpp::create_object<app::TheGiftSetupController>(get_class());
        }
    } // namespace TheGiftSetupController
} // namespace app::classes::types
