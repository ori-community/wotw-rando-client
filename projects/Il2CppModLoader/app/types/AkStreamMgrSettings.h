#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkStreamMgrSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkStreamMgrSettings__Class** type_info;
        inline app::AkStreamMgrSettings__Class* get_class() {
            return il2cpp::get_class<app::AkStreamMgrSettings__Class>(type_info, "", "AkStreamMgrSettings");
        }
        inline app::AkStreamMgrSettings* create() {
            return il2cpp::create_object<app::AkStreamMgrSettings>(get_class());
        }
    } // namespace AkStreamMgrSettings
} // namespace app::classes::types
