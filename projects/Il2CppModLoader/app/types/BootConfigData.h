#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BootConfigData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BootConfigData__Class** type_info;
        inline app::BootConfigData__Class* get_class() {
            return il2cpp::get_class<app::BootConfigData__Class>(type_info, "UnityEngine", "BootConfigData");
        }
        inline app::BootConfigData* create() {
            return il2cpp::create_object<app::BootConfigData>(get_class());
        }
    } // namespace BootConfigData
} // namespace app::classes::types
