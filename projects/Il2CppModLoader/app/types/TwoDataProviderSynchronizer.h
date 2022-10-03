#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TwoDataProviderSynchronizer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TwoDataProviderSynchronizer__Class** type_info;
        inline app::TwoDataProviderSynchronizer__Class* get_class() {
            return il2cpp::get_class<app::TwoDataProviderSynchronizer__Class>(type_info, "SystemIntegration.Synchronizer", "TwoDataProviderSynchronizer");
        }
        inline app::TwoDataProviderSynchronizer* create() {
            return il2cpp::create_object<app::TwoDataProviderSynchronizer>(get_class());
        }
    } // namespace TwoDataProviderSynchronizer
} // namespace app::classes::types
