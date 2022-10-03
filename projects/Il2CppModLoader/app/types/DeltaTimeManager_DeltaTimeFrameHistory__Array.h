#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeltaTimeManager_DeltaTimeFrameHistory__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeltaTimeManager_DeltaTimeFrameHistory__Array__Class** type_info;
        inline app::DeltaTimeManager_DeltaTimeFrameHistory__Array__Class* get_class() {
            return il2cpp::get_class<app::DeltaTimeManager_DeltaTimeFrameHistory__Array__Class>(type_info, "usedStandaloneScripts.DeltaTimeManagers", "DeltaTimeManager+DeltaTimeFrameHistory[]");
        }
        inline app::DeltaTimeManager_DeltaTimeFrameHistory__Array* create() {
            return il2cpp::create_object<app::DeltaTimeManager_DeltaTimeFrameHistory__Array>(get_class());
        }
    } // namespace DeltaTimeManager_DeltaTimeFrameHistory__Array
} // namespace app::classes::types
