#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkXBoxOneSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkXBoxOneSettings__Class** type_info;
        inline app::AkXBoxOneSettings__Class* get_class() {
            return il2cpp::get_class<app::AkXBoxOneSettings__Class>(type_info, "", "AkXBoxOneSettings");
        }
        inline app::AkXBoxOneSettings* create() {
            return il2cpp::create_object<app::AkXBoxOneSettings>(get_class());
        }
    } // namespace AkXBoxOneSettings
} // namespace app::classes::types
