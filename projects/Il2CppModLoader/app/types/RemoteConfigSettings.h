#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RemoteConfigSettings {
        namespace {
            inline app::RemoteConfigSettings__Class* type_info_ref = nullptr;
        }
        inline app::RemoteConfigSettings__Class** type_info = &type_info_ref;
        inline app::RemoteConfigSettings__Class* get_class() {
            return il2cpp::get_class<app::RemoteConfigSettings__Class>(type_info, "UnityEngine", "RemoteConfigSettings");
        }
        inline app::RemoteConfigSettings* create() {
            return il2cpp::create_object<app::RemoteConfigSettings>(get_class());
        }
    } // namespace RemoteConfigSettings
} // namespace app::classes::types
