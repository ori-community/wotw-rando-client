#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoteSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RemoteSettings__Class** type_info;
        inline app::RemoteSettings__Class* get_class() {
            return il2cpp::get_class<app::RemoteSettings__Class>(type_info, "UnityEngine", "RemoteSettings");
        }
        inline app::RemoteSettings* create() {
            return il2cpp::create_object<app::RemoteSettings>(get_class());
        }
    } // namespace RemoteSettings
} // namespace app::classes::types
