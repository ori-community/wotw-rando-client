#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WebConnectionStream_c_DisplayClass76_0 {
        inline app::WebConnectionStream_c_DisplayClass76_0__Class** type_info = (app::WebConnectionStream_c_DisplayClass76_0__Class**)(modloader::win::memory::resolve_rva(0x0471FC40));
        inline app::WebConnectionStream_c_DisplayClass76_0__Class* get_class() {
            return il2cpp::get_nested_class<app::WebConnectionStream_c_DisplayClass76_0__Class>(type_info, "System.Net", "WebConnectionStream", "<>c__DisplayClass76_0");
        }
        inline app::WebConnectionStream_c_DisplayClass76_0* create() {
            return il2cpp::create_object<app::WebConnectionStream_c_DisplayClass76_0>(get_class());
        }
    } // namespace WebConnectionStream_c_DisplayClass76_0
} // namespace app::classes::types
