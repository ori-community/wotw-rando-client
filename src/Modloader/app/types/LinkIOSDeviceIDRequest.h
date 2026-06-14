#pragma once
#include <Modloader/app/structs/LinkIOSDeviceIDRequest.h>
#include <Modloader/app/structs/LinkIOSDeviceIDRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinkIOSDeviceIDRequest {
        inline app::LinkIOSDeviceIDRequest__Class** type_info() {
            static app::LinkIOSDeviceIDRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LinkIOSDeviceIDRequest__Class**)(modloader::win::memory::resolve_rva(0x04709038));
            }
            return cache;
        }
        inline app::LinkIOSDeviceIDRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkIOSDeviceIDRequest__Class>(type_info(), "PlayFab.ClientModels", "LinkIOSDeviceIDRequest");
        }
        inline app::LinkIOSDeviceIDRequest* create() {
            return il2cpp::create_object<app::LinkIOSDeviceIDRequest>(get_class());
        }
    } // namespace LinkIOSDeviceIDRequest
} // namespace app::classes::types
