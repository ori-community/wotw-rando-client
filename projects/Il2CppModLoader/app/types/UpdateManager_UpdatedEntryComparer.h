#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateManager_UpdatedEntryComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdateManager_UpdatedEntryComparer__Class** type_info;
        inline app::UpdateManager_UpdatedEntryComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::UpdateManager_UpdatedEntryComparer__Class>(type_info, "Moon.Driver", "UpdateManager", "UpdatedEntryComparer");
        }
        inline app::UpdateManager_UpdatedEntryComparer* create() {
            return il2cpp::create_object<app::UpdateManager_UpdatedEntryComparer>(get_class());
        }
    } // namespace UpdateManager_UpdatedEntryComparer
} // namespace app::classes::types
