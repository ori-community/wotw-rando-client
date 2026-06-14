#pragma once
#include <Modloader/app/structs/BerryCelebrationController.h>
#include <Modloader/app/structs/BerryCelebrationController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BerryCelebrationController {
        inline app::BerryCelebrationController__Class** type_info() {
            static app::BerryCelebrationController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BerryCelebrationController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BerryCelebrationController__Class* get_class() {
            return il2cpp::get_class<app::BerryCelebrationController__Class>(type_info(), "", "BerryCelebrationController");
        }
        inline app::BerryCelebrationController* create() {
            return il2cpp::create_object<app::BerryCelebrationController>(get_class());
        }
    } // namespace BerryCelebrationController
} // namespace app::classes::types
