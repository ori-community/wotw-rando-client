#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkInitSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkInitSettings__Class** type_info;
        inline app::AkInitSettings__Class* get_class() {
            return il2cpp::get_class<app::AkInitSettings__Class>(type_info, "", "AkInitSettings");
        }
        inline app::AkInitSettings* create() {
            return il2cpp::create_object<app::AkInitSettings>(get_class());
        }
    } // namespace AkInitSettings
} // namespace app::classes::types
