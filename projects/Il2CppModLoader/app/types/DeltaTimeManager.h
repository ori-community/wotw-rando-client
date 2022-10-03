#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeltaTimeManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeltaTimeManager__Class** type_info;
        inline app::DeltaTimeManager__Class* get_class() {
            return il2cpp::get_class<app::DeltaTimeManager__Class>(type_info, "usedStandaloneScripts.DeltaTimeManagers", "DeltaTimeManager");
        }
        inline app::DeltaTimeManager* create() {
            return il2cpp::create_object<app::DeltaTimeManager>(get_class());
        }
    } // namespace DeltaTimeManager
} // namespace app::classes::types
