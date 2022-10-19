#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpdateManager_ActiveEntryComparer {
        inline app::UpdateManager_ActiveEntryComparer__Class** type_info = (app::UpdateManager_ActiveEntryComparer__Class**)(modloader::win::memory::resolve_rva(0x04761E70));
        inline app::UpdateManager_ActiveEntryComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::UpdateManager_ActiveEntryComparer__Class>(type_info, "Moon.Driver", "UpdateManager", "ActiveEntryComparer");
        }
        inline app::UpdateManager_ActiveEntryComparer* create() {
            return il2cpp::create_object<app::UpdateManager_ActiveEntryComparer>(get_class());
        }
    } // namespace UpdateManager_ActiveEntryComparer
} // namespace app::classes::types
