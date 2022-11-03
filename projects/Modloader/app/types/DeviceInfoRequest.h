#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeviceInfoRequest {
        inline app::DeviceInfoRequest__Class** type_info = (app::DeviceInfoRequest__Class**)(modloader::win::memory::resolve_rva(0x04722E10));
        inline app::DeviceInfoRequest__Class* get_class() {
            return il2cpp::get_class<app::DeviceInfoRequest__Class>(type_info, "PlayFab.ClientModels", "DeviceInfoRequest");
        }
        inline app::DeviceInfoRequest* create() {
            return il2cpp::create_object<app::DeviceInfoRequest>(get_class());
        }
    } // namespace DeviceInfoRequest
} // namespace app::classes::types
