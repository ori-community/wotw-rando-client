#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IServiceSynchronizer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IServiceSynchronizer__Class** type_info;
        inline app::IServiceSynchronizer__Class* get_class() {
            return il2cpp::get_class<app::IServiceSynchronizer__Class>(type_info, "SystemIntegration.Synchronizer", "IServiceSynchronizer");
        }
    } // namespace IServiceSynchronizer
} // namespace app::classes::types
