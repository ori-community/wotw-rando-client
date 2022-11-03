#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WebClient {
        inline app::WebClient__Class** type_info = (app::WebClient__Class**)(modloader::win::memory::resolve_rva(0x047155A0));
        inline app::WebClient__Class* get_class() {
            return il2cpp::get_class<app::WebClient__Class>(type_info, "System.Net", "WebClient");
        }
        inline app::WebClient* create() {
            return il2cpp::create_object<app::WebClient>(get_class());
        }
    } // namespace WebClient
} // namespace app::classes::types
