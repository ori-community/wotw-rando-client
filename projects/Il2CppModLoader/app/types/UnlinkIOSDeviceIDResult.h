#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlinkIOSDeviceIDResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnlinkIOSDeviceIDResult__Class** type_info;
        inline app::UnlinkIOSDeviceIDResult__Class* get_class() {
            return il2cpp::get_class<app::UnlinkIOSDeviceIDResult__Class>(type_info, "PlayFab.ClientModels", "UnlinkIOSDeviceIDResult");
        }
        inline app::UnlinkIOSDeviceIDResult* create() {
            return il2cpp::create_object<app::UnlinkIOSDeviceIDResult>(get_class());
        }
    } // namespace UnlinkIOSDeviceIDResult
} // namespace app::classes::types
