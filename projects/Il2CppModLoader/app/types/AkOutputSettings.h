#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkOutputSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkOutputSettings__Class** type_info;
        inline app::AkOutputSettings__Class* get_class() {
            return il2cpp::get_class<app::AkOutputSettings__Class>(type_info, "", "AkOutputSettings");
        }
        inline app::AkOutputSettings* create() {
            return il2cpp::create_object<app::AkOutputSettings>(get_class());
        }
    } // namespace AkOutputSettings
} // namespace app::classes::types
