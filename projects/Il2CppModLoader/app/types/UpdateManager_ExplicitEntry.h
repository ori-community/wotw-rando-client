#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpdateManager_ExplicitEntry {
        inline app::UpdateManager_ExplicitEntry__Class** type_info = (app::UpdateManager_ExplicitEntry__Class**)(modloader::win::memory::resolve_rva(0x0472CC78));
        inline app::UpdateManager_ExplicitEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::UpdateManager_ExplicitEntry__Class>(type_info, "Moon.Driver", "UpdateManager", "ExplicitEntry");
        }
        inline app::UpdateManager_ExplicitEntry* create() {
            return il2cpp::create_object<app::UpdateManager_ExplicitEntry>(get_class());
        }
        inline app::UpdateManager_ExplicitEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::UpdateManager_ExplicitEntry__Array>(get_class(), size);
        }
        inline app::UpdateManager_ExplicitEntry__Array* create_array(const std::vector<app::UpdateManager_ExplicitEntry*>& items) {
            return il2cpp::array_new<app::UpdateManager_ExplicitEntry__Array>(get_class(), items);
        }
    } // namespace UpdateManager_ExplicitEntry
} // namespace app::classes::types
