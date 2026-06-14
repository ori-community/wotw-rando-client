#pragma once
#include <Modloader/app/structs/DeviceInfoRequest.h>
#include <Modloader/app/structs/DeviceInfoRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeviceInfoRequest {
        inline app::DeviceInfoRequest__Class** type_info() {
            static app::DeviceInfoRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DeviceInfoRequest__Class**)(modloader::win::memory::resolve_rva(0x04722E10));
            }
            return cache;
        }
        inline app::DeviceInfoRequest__Class* get_class() {
            return il2cpp::get_class<app::DeviceInfoRequest__Class>(type_info(), "PlayFab.ClientModels", "DeviceInfoRequest");
        }
        inline app::DeviceInfoRequest* create() {
            return il2cpp::create_object<app::DeviceInfoRequest>(get_class());
        }
    } // namespace DeviceInfoRequest
} // namespace app::classes::types
