#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkSourceSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkSourceSettings__Class** type_info;
        inline app::AkSourceSettings__Class* get_class() {
            return il2cpp::get_class<app::AkSourceSettings__Class>(type_info, "", "AkSourceSettings");
        }
        inline app::AkSourceSettings* create() {
            return il2cpp::create_object<app::AkSourceSettings>(get_class());
        }
    } // namespace AkSourceSettings
} // namespace app::classes::types
