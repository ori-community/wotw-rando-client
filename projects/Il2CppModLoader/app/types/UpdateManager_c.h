#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateManager_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdateManager_c__Class** type_info;
        inline app::UpdateManager_c__Class* get_class() {
            return il2cpp::get_nested_class<app::UpdateManager_c__Class>(type_info, "Moon.Driver", "UpdateManager", "<>c");
        }
        inline app::UpdateManager_c* create() {
            return il2cpp::create_object<app::UpdateManager_c>(get_class());
        }
    } // namespace UpdateManager_c
} // namespace app::classes::types
