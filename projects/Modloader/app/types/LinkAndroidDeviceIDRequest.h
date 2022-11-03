#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LinkAndroidDeviceIDRequest {
        inline app::LinkAndroidDeviceIDRequest__Class** type_info = (app::LinkAndroidDeviceIDRequest__Class**)(modloader::win::memory::resolve_rva(0x0470C0A0));
        inline app::LinkAndroidDeviceIDRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkAndroidDeviceIDRequest__Class>(type_info, "PlayFab.ClientModels", "LinkAndroidDeviceIDRequest");
        }
        inline app::LinkAndroidDeviceIDRequest* create() {
            return il2cpp::create_object<app::LinkAndroidDeviceIDRequest>(get_class());
        }
    } // namespace LinkAndroidDeviceIDRequest
} // namespace app::classes::types
