#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SystemIntegrationMainThreadRunner {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SystemIntegrationMainThreadRunner__Class** type_info;
        inline app::SystemIntegrationMainThreadRunner__Class* get_class() {
            return il2cpp::get_class<app::SystemIntegrationMainThreadRunner__Class>(type_info, "SystemIntegration", "SystemIntegrationMainThreadRunner");
        }
        inline app::SystemIntegrationMainThreadRunner* create() {
            return il2cpp::create_object<app::SystemIntegrationMainThreadRunner>(get_class());
        }
    } // namespace SystemIntegrationMainThreadRunner
} // namespace app::classes::types
