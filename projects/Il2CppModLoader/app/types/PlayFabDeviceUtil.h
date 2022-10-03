#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabDeviceUtil {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabDeviceUtil__Class** type_info;
        inline app::PlayFabDeviceUtil__Class* get_class() {
            return il2cpp::get_class<app::PlayFabDeviceUtil__Class>(type_info, "PlayFab.Internal", "PlayFabDeviceUtil");
        }
        inline app::PlayFabDeviceUtil* create() {
            return il2cpp::create_object<app::PlayFabDeviceUtil>(get_class());
        }
    } // namespace PlayFabDeviceUtil
} // namespace app::classes::types
