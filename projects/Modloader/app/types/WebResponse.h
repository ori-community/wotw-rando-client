#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WebResponse {
        inline app::WebResponse__Class** type_info = (app::WebResponse__Class**)(modloader::win::memory::resolve_rva(0x047516B0));
        inline app::WebResponse__Class* get_class() {
            return il2cpp::get_class<app::WebResponse__Class>(type_info, "System.Net", "WebResponse");
        }
        inline app::WebResponse* create() {
            return il2cpp::create_object<app::WebResponse>(get_class());
        }
    } // namespace WebResponse
} // namespace app::classes::types
