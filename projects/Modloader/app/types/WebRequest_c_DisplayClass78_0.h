#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WebRequest_c_DisplayClass78_0 {
        inline app::WebRequest_c_DisplayClass78_0__Class** type_info = (app::WebRequest_c_DisplayClass78_0__Class**)(modloader::win::memory::resolve_rva(0x0474B4D0));
        inline app::WebRequest_c_DisplayClass78_0__Class* get_class() {
            return il2cpp::get_nested_class<app::WebRequest_c_DisplayClass78_0__Class>(type_info, "System.Net", "WebRequest", "<>c__DisplayClass78_0");
        }
        inline app::WebRequest_c_DisplayClass78_0* create() {
            return il2cpp::create_object<app::WebRequest_c_DisplayClass78_0>(get_class());
        }
    } // namespace WebRequest_c_DisplayClass78_0
} // namespace app::classes::types
