#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HealthController_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HealthController_c__Class** type_info;
        inline app::HealthController_c__Class* get_class() {
            return il2cpp::get_nested_class<app::HealthController_c__Class>(type_info, "", "HealthController", "<>c");
        }
        inline app::HealthController_c* create() {
            return il2cpp::create_object<app::HealthController_c>(get_class());
        }
    } // namespace HealthController_c
} // namespace app::classes::types
