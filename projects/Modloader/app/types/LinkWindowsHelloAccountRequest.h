#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LinkWindowsHelloAccountRequest__Class.h>
#include <Modloader/app/structs/LinkWindowsHelloAccountRequest.h>

namespace app::classes::types {
    namespace LinkWindowsHelloAccountRequest {
        inline app::LinkWindowsHelloAccountRequest__Class** type_info = (app::LinkWindowsHelloAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x04701720));
        inline app::LinkWindowsHelloAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkWindowsHelloAccountRequest__Class>(type_info, "PlayFab.ClientModels", "LinkWindowsHelloAccountRequest");
        }
        inline app::LinkWindowsHelloAccountRequest* create() {
            return il2cpp::create_object<app::LinkWindowsHelloAccountRequest>(get_class());
        }
    } // namespace LinkWindowsHelloAccountRequest
} // namespace app::classes::types
