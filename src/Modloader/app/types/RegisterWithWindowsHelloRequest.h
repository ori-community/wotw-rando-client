#pragma once
#include <Modloader/app/structs/RegisterWithWindowsHelloRequest.h>
#include <Modloader/app/structs/RegisterWithWindowsHelloRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegisterWithWindowsHelloRequest {
        inline app::RegisterWithWindowsHelloRequest__Class** type_info() {
            static app::RegisterWithWindowsHelloRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RegisterWithWindowsHelloRequest__Class**)(modloader::win::memory::resolve_rva(0x04746990));
            }
            return cache;
        }
        inline app::RegisterWithWindowsHelloRequest__Class* get_class() {
            return il2cpp::get_class<app::RegisterWithWindowsHelloRequest__Class>(type_info(), "PlayFab.ClientModels", "RegisterWithWindowsHelloRequest");
        }
        inline app::RegisterWithWindowsHelloRequest* create() {
            return il2cpp::create_object<app::RegisterWithWindowsHelloRequest>(get_class());
        }
    } // namespace RegisterWithWindowsHelloRequest
} // namespace app::classes::types
