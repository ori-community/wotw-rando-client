#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VignettingSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VignettingSettings__Class** type_info;
        inline app::VignettingSettings__Class* get_class() {
            return il2cpp::get_class<app::VignettingSettings__Class>(type_info, "", "VignettingSettings");
        }
        inline app::VignettingSettings* create() {
            return il2cpp::create_object<app::VignettingSettings>(get_class());
        }
    } // namespace VignettingSettings
} // namespace app::classes::types
