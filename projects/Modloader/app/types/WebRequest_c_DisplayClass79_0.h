#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WebRequest_c_DisplayClass79_0__Class.h>
#include <Modloader/app/structs/WebRequest_c_DisplayClass79_0.h>

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
