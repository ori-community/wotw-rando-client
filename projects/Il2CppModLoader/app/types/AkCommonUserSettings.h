#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkCommonUserSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkCommonUserSettings__Class** type_info;
        inline app::AkCommonUserSettings__Class* get_class() {
            return il2cpp::get_class<app::AkCommonUserSettings__Class>(type_info, "", "AkCommonUserSettings");
        }
        inline app::AkCommonUserSettings* create() {
            return il2cpp::create_object<app::AkCommonUserSettings>(get_class());
        }
    } // namespace AkCommonUserSettings
} // namespace app::classes::types
