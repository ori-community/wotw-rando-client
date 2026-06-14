#pragma once
#include <Modloader/app/structs/LinkWindowsHelloAccountResponse.h>
#include <Modloader/app/structs/LinkWindowsHelloAccountResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinkWindowsHelloAccountResponse {
        inline app::LinkWindowsHelloAccountResponse__Class** type_info() {
            static app::LinkWindowsHelloAccountResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LinkWindowsHelloAccountResponse__Class**)(modloader::win::memory::resolve_rva(0x04796580));
            }
            return cache;
        }
        inline app::LinkWindowsHelloAccountResponse__Class* get_class() {
            return il2cpp::get_class<app::LinkWindowsHelloAccountResponse__Class>(type_info(), "PlayFab.ClientModels", "LinkWindowsHelloAccountResponse");
        }
        inline app::LinkWindowsHelloAccountResponse* create() {
            return il2cpp::create_object<app::LinkWindowsHelloAccountResponse>(get_class());
        }
    } // namespace LinkWindowsHelloAccountResponse
} // namespace app::classes::types
