#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LinkAndroidDeviceIDResult {
        inline app::LinkAndroidDeviceIDResult__Class** type_info = (app::LinkAndroidDeviceIDResult__Class**)(modloader::win::memory::resolve_rva(0x0478D130));
        inline app::LinkAndroidDeviceIDResult__Class* get_class() {
            return il2cpp::get_class<app::LinkAndroidDeviceIDResult__Class>(type_info, "PlayFab.ClientModels", "LinkAndroidDeviceIDResult");
        }
        inline app::LinkAndroidDeviceIDResult* create() {
            return il2cpp::create_object<app::LinkAndroidDeviceIDResult>(get_class());
        }
    } // namespace LinkAndroidDeviceIDResult
} // namespace app::classes::types
