#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkMemSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkMemSettings__Class** type_info;
        inline app::AkMemSettings__Class* get_class() {
            return il2cpp::get_class<app::AkMemSettings__Class>(type_info, "", "AkMemSettings");
        }
        inline app::AkMemSettings* create() {
            return il2cpp::create_object<app::AkMemSettings>(get_class());
        }
    } // namespace AkMemSettings
} // namespace app::classes::types
