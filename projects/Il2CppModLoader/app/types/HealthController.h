#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HealthController {
        namespace {
            app::HealthController__Class* type_info_ref = nullptr;
        }
        app::HealthController__Class** type_info = &type_info_ref;
        inline app::HealthController__Class* get_class() {
            return il2cpp::get_class<app::HealthController__Class>(type_info, "", "HealthController");
        }
        inline app::HealthController* create() {
            return il2cpp::create_object<app::HealthController>(get_class());
        }
    } // namespace HealthController
} // namespace app::classes::types
