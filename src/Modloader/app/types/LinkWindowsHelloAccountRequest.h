#pragma once
#include <Modloader/app/structs/LinkWindowsHelloAccountRequest.h>
#include <Modloader/app/structs/LinkWindowsHelloAccountRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinkWindowsHelloAccountRequest {
        inline app::LinkWindowsHelloAccountRequest__Class** type_info() {
            static app::LinkWindowsHelloAccountRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LinkWindowsHelloAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x04701720));
            }
            return cache;
        }
        inline app::LinkWindowsHelloAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkWindowsHelloAccountRequest__Class>(type_info(), "PlayFab.ClientModels", "LinkWindowsHelloAccountRequest");
        }
        inline app::LinkWindowsHelloAccountRequest* create() {
            return il2cpp::create_object<app::LinkWindowsHelloAccountRequest>(get_class());
        }
    } // namespace LinkWindowsHelloAccountRequest
} // namespace app::classes::types
