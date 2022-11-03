#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LinkWindowsHelloAccountResponse {
        inline app::LinkWindowsHelloAccountResponse__Class** type_info = (app::LinkWindowsHelloAccountResponse__Class**)(modloader::win::memory::resolve_rva(0x04796580));
        inline app::LinkWindowsHelloAccountResponse__Class* get_class() {
            return il2cpp::get_class<app::LinkWindowsHelloAccountResponse__Class>(type_info, "PlayFab.ClientModels", "LinkWindowsHelloAccountResponse");
        }
        inline app::LinkWindowsHelloAccountResponse* create() {
            return il2cpp::create_object<app::LinkWindowsHelloAccountResponse>(get_class());
        }
    } // namespace LinkWindowsHelloAccountResponse
} // namespace app::classes::types
