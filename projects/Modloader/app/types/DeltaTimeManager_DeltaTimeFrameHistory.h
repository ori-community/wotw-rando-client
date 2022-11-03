#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeltaTimeManager_DeltaTimeFrameHistory {
        inline app::DeltaTimeManager_DeltaTimeFrameHistory__Class** type_info = (app::DeltaTimeManager_DeltaTimeFrameHistory__Class**)(modloader::win::memory::resolve_rva(0x04722860));
        inline app::DeltaTimeManager_DeltaTimeFrameHistory__Class* get_class() {
            return il2cpp::get_nested_class<app::DeltaTimeManager_DeltaTimeFrameHistory__Class>(type_info, "usedStandaloneScripts.DeltaTimeManagers", "DeltaTimeManager", "DeltaTimeFrameHistory");
        }
        inline app::DeltaTimeManager_DeltaTimeFrameHistory* create() {
            return il2cpp::create_object<app::DeltaTimeManager_DeltaTimeFrameHistory>(get_class());
        }
        inline app::DeltaTimeManager_DeltaTimeFrameHistory__Array* create_array(int size) {
            return il2cpp::array_new<app::DeltaTimeManager_DeltaTimeFrameHistory__Array>(get_class(), size);
        }
        inline app::DeltaTimeManager_DeltaTimeFrameHistory__Array* create_array(const std::vector<app::DeltaTimeManager_DeltaTimeFrameHistory*>& items) {
            return il2cpp::array_new<app::DeltaTimeManager_DeltaTimeFrameHistory__Array>(get_class(), items);
        }
    } // namespace DeltaTimeManager_DeltaTimeFrameHistory
} // namespace app::classes::types
