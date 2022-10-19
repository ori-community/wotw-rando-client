#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeltaTimeManager {
        inline app::DeltaTimeManager__Class** type_info = (app::DeltaTimeManager__Class**)(modloader::win::memory::resolve_rva(0x04704CF0));
        inline app::DeltaTimeManager__Class* get_class() {
            return il2cpp::get_class<app::DeltaTimeManager__Class>(type_info, "usedStandaloneScripts.DeltaTimeManagers", "DeltaTimeManager");
        }
        inline app::DeltaTimeManager* create() {
            return il2cpp::create_object<app::DeltaTimeManager>(get_class());
        }
    } // namespace DeltaTimeManager
} // namespace app::classes::types
