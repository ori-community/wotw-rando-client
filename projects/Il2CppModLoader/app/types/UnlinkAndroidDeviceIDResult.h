#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnlinkAndroidDeviceIDResult {
        inline app::UnlinkAndroidDeviceIDResult__Class** type_info = (app::UnlinkAndroidDeviceIDResult__Class**)(modloader::win::memory::resolve_rva(0x04769B08));
        inline app::UnlinkAndroidDeviceIDResult__Class* get_class() {
            return il2cpp::get_class<app::UnlinkAndroidDeviceIDResult__Class>(type_info, "PlayFab.ClientModels", "UnlinkAndroidDeviceIDResult");
        }
        inline app::UnlinkAndroidDeviceIDResult* create() {
            return il2cpp::create_object<app::UnlinkAndroidDeviceIDResult>(get_class());
        }
    } // namespace UnlinkAndroidDeviceIDResult
} // namespace app::classes::types
