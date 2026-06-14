#pragma once
#include <Modloader/app/structs/WebClient_DownloadBitsState.h>
#include <Modloader/app/structs/WebClient_DownloadBitsState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebClient_DownloadBitsState {
        inline app::WebClient_DownloadBitsState__Class** type_info() {
            static app::WebClient_DownloadBitsState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WebClient_DownloadBitsState__Class**)(modloader::win::memory::resolve_rva(0x0473FC00));
            }
            return cache;
        }
        inline app::WebClient_DownloadBitsState__Class* get_class() {
            return il2cpp::get_nested_class<app::WebClient_DownloadBitsState__Class>(type_info(), "System.Net", "WebClient", "DownloadBitsState");
        }
        inline app::WebClient_DownloadBitsState* create() {
            return il2cpp::create_object<app::WebClient_DownloadBitsState>(get_class());
        }
    } // namespace WebClient_DownloadBitsState
} // namespace app::classes::types
