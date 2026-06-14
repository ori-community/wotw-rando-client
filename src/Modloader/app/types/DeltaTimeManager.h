#pragma once
#include <Modloader/app/structs/DeltaTimeManager.h>
#include <Modloader/app/structs/DeltaTimeManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeltaTimeManager {
        inline app::DeltaTimeManager__Class** type_info() {
            static app::DeltaTimeManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DeltaTimeManager__Class**)(modloader::win::memory::resolve_rva(0x04704CF0));
            }
            return cache;
        }
        inline app::DeltaTimeManager__Class* get_class() {
            return il2cpp::get_class<app::DeltaTimeManager__Class>(type_info(), "usedStandaloneScripts.DeltaTimeManagers", "DeltaTimeManager");
        }
        inline app::DeltaTimeManager* create() {
            return il2cpp::create_object<app::DeltaTimeManager>(get_class());
        }
    } // namespace DeltaTimeManager
} // namespace app::classes::types
