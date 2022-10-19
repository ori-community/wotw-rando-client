#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WebRequest_c_DisplayClass79_0 {
        inline app::WebRequest_c_DisplayClass79_0__Class** type_info = (app::WebRequest_c_DisplayClass79_0__Class**)(modloader::win::memory::resolve_rva(0x04719AD8));
        inline app::WebRequest_c_DisplayClass79_0__Class* get_class() {
            return il2cpp::get_nested_class<app::WebRequest_c_DisplayClass79_0__Class>(type_info, "System.Net", "WebRequest", "<>c__DisplayClass79_0");
        }
        inline app::WebRequest_c_DisplayClass79_0* create() {
            return il2cpp::create_object<app::WebRequest_c_DisplayClass79_0>(get_class());
        }
    } // namespace WebRequest_c_DisplayClass79_0
} // namespace app::classes::types
