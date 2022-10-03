#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateManager_ExplicitEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdateManager_ExplicitEntry__Class** type_info;
        inline app::UpdateManager_ExplicitEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::UpdateManager_ExplicitEntry__Class>(type_info, "Moon.Driver", "UpdateManager", "ExplicitEntry");
        }
        inline app::UpdateManager_ExplicitEntry* create() {
            return il2cpp::create_object<app::UpdateManager_ExplicitEntry>(get_class());
        }
        inline app::UpdateManager_ExplicitEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::UpdateManager_ExplicitEntry__Array>(get_class(), size);
        }
    } // namespace UpdateManager_ExplicitEntry
} // namespace app::classes::types
