#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LinkAndroidDeviceIDResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LinkAndroidDeviceIDResult__Class** type_info;
        inline app::LinkAndroidDeviceIDResult__Class* get_class() {
            return il2cpp::get_class<app::LinkAndroidDeviceIDResult__Class>(type_info, "PlayFab.ClientModels", "LinkAndroidDeviceIDResult");
        }
        inline app::LinkAndroidDeviceIDResult* create() {
            return il2cpp::create_object<app::LinkAndroidDeviceIDResult>(get_class());
        }
    } // namespace LinkAndroidDeviceIDResult
} // namespace app::classes::types
