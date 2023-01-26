#pragma once
#include <Modloader/app/structs/DeltaTimeManager_DeltaTimeFrameHistory__Array.h>
#include <Modloader/app/structs/DeltaTimeManager_DeltaTimeFrameHistory__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeltaTimeManager_DeltaTimeFrameHistory__Array {
        inline app::DeltaTimeManager_DeltaTimeFrameHistory__Array__Class** type_info() {
            static app::DeltaTimeManager_DeltaTimeFrameHistory__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DeltaTimeManager_DeltaTimeFrameHistory__Array__Class**)(modloader::win::memory::resolve_rva(0x04713A78));
            }
            return cache;
        }
        inline app::DeltaTimeManager_DeltaTimeFrameHistory__Array__Class* get_class() {
            return il2cpp::get_class<app::DeltaTimeManager_DeltaTimeFrameHistory__Array__Class>(type_info(), "usedStandaloneScripts.DeltaTimeManagers", "DeltaTimeManager+DeltaTimeFrameHistory[]");
        }
        inline app::DeltaTimeManager_DeltaTimeFrameHistory__Array* create() {
            return il2cpp::create_object<app::DeltaTimeManager_DeltaTimeFrameHistory__Array>(get_class());
        }
    } // namespace DeltaTimeManager_DeltaTimeFrameHistory__Array
} // namespace app::classes::types
