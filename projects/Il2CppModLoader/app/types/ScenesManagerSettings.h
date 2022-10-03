#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScenesManagerSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScenesManagerSettings__Class** type_info;
        inline app::ScenesManagerSettings__Class* get_class() {
            return il2cpp::get_class<app::ScenesManagerSettings__Class>(type_info, "", "ScenesManagerSettings");
        }
        inline app::ScenesManagerSettings* create() {
            return il2cpp::create_object<app::ScenesManagerSettings>(get_class());
        }
    } // namespace ScenesManagerSettings
} // namespace app::classes::types
