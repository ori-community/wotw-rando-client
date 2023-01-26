#pragma once
#include <Modloader/app/structs/TwoDataProviderSynchronizer.h>
#include <Modloader/app/structs/TwoDataProviderSynchronizer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TwoDataProviderSynchronizer {
        inline app::TwoDataProviderSynchronizer__Class** type_info() {
            static app::TwoDataProviderSynchronizer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TwoDataProviderSynchronizer__Class**)(modloader::win::memory::resolve_rva(0x047588D8));
            }
            return cache;
        }
        inline app::TwoDataProviderSynchronizer__Class* get_class() {
            return il2cpp::get_class<app::TwoDataProviderSynchronizer__Class>(type_info(), "SystemIntegration.Synchronizer", "TwoDataProviderSynchronizer");
        }
        inline app::TwoDataProviderSynchronizer* create() {
            return il2cpp::create_object<app::TwoDataProviderSynchronizer>(get_class());
        }
    } // namespace TwoDataProviderSynchronizer
} // namespace app::classes::types
