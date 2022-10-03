#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateManager_ActiveEntryComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdateManager_ActiveEntryComparer__Class** type_info;
        inline app::UpdateManager_ActiveEntryComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::UpdateManager_ActiveEntryComparer__Class>(type_info, "Moon.Driver", "UpdateManager", "ActiveEntryComparer");
        }
        inline app::UpdateManager_ActiveEntryComparer* create() {
            return il2cpp::create_object<app::UpdateManager_ActiveEntryComparer>(get_class());
        }
    } // namespace UpdateManager_ActiveEntryComparer
} // namespace app::classes::types
