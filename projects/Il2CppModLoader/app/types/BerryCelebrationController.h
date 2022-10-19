#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BerryCelebrationController {
        namespace {
            inline app::BerryCelebrationController__Class* type_info_ref = nullptr;
        }
        inline app::BerryCelebrationController__Class** type_info = &type_info_ref;
        inline app::BerryCelebrationController__Class* get_class() {
            return il2cpp::get_class<app::BerryCelebrationController__Class>(type_info, "", "BerryCelebrationController");
        }
        inline app::BerryCelebrationController* create() {
            return il2cpp::create_object<app::BerryCelebrationController>(get_class());
        }
    } // namespace BerryCelebrationController
} // namespace app::classes::types
