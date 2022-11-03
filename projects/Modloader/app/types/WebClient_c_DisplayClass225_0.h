#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WebClient_c_DisplayClass225_0 {
        inline app::WebClient_c_DisplayClass225_0__Class** type_info = (app::WebClient_c_DisplayClass225_0__Class**)(modloader::win::memory::resolve_rva(0x0477BC60));
        inline app::WebClient_c_DisplayClass225_0__Class* get_class() {
            return il2cpp::get_nested_class<app::WebClient_c_DisplayClass225_0__Class>(type_info, "System.Net", "WebClient", "<>c__DisplayClass225_0");
        }
        inline app::WebClient_c_DisplayClass225_0* create() {
            return il2cpp::create_object<app::WebClient_c_DisplayClass225_0>(get_class());
        }
    } // namespace WebClient_c_DisplayClass225_0
} // namespace app::classes::types
