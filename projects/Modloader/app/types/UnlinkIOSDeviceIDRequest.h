#pragma once
#include <Modloader/app/structs/UnlinkIOSDeviceIDRequest.h>
#include <Modloader/app/structs/UnlinkIOSDeviceIDRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnlinkIOSDeviceIDRequest {
        inline app::UnlinkIOSDeviceIDRequest__Class** type_info() {
            static app::UnlinkIOSDeviceIDRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnlinkIOSDeviceIDRequest__Class**)(modloader::win::memory::resolve_rva(0x04705708));
            }
            return cache;
        }
        inline app::UnlinkIOSDeviceIDRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkIOSDeviceIDRequest__Class>(type_info(), "PlayFab.ClientModels", "UnlinkIOSDeviceIDRequest");
        }
        inline app::UnlinkIOSDeviceIDRequest* create() {
            return il2cpp::create_object<app::UnlinkIOSDeviceIDRequest>(get_class());
        }
    } // namespace UnlinkIOSDeviceIDRequest
} // namespace app::classes::types
