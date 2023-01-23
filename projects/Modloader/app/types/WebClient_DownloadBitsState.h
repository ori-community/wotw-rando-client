#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WebClient_DownloadBitsState__Class.h>
#include <Modloader/app/structs/WebClient_DownloadBitsState.h>

namespace app::classes::types {
    namespace WebClient_DownloadBitsState {
        inline app::WebClient_DownloadBitsState__Class** type_info = (app::WebClient_DownloadBitsState__Class**)(modloader::win::memory::resolve_rva(0x0473FC00));
        inline app::WebClient_DownloadBitsState__Class* get_class() {
            return il2cpp::get_nested_class<app::WebClient_DownloadBitsState__Class>(type_info, "System.Net", "WebClient", "DownloadBitsState");
        }
        inline app::WebClient_DownloadBitsState* create() {
            return il2cpp::create_object<app::WebClient_DownloadBitsState>(get_class());
        }
    } // namespace WebClient_DownloadBitsState
} // namespace app::classes::types
