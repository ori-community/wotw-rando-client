#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TwoDataProviderSynchronizer {
        inline app::TwoDataProviderSynchronizer__Class** type_info = (app::TwoDataProviderSynchronizer__Class**)(modloader::win::memory::resolve_rva(0x047588D8));
        inline app::TwoDataProviderSynchronizer__Class* get_class() {
            return il2cpp::get_class<app::TwoDataProviderSynchronizer__Class>(type_info, "SystemIntegration.Synchronizer", "TwoDataProviderSynchronizer");
        }
        inline app::TwoDataProviderSynchronizer* create() {
            return il2cpp::create_object<app::TwoDataProviderSynchronizer>(get_class());
        }
    } // namespace TwoDataProviderSynchronizer
} // namespace app::classes::types
