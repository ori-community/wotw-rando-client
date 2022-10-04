#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IRaceServiceProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IRaceServiceProvider__Class** type_info;
        inline app::IRaceServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::IRaceServiceProvider__Class>(type_info, "SystemIntegration.Races", "IRaceServiceProvider");
        }
    } // namespace IRaceServiceProvider
} // namespace app::classes::types
