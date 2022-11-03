#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WebService_c_DisplayClass1_0 {
        inline app::WebService_c_DisplayClass1_0__Class** type_info = (app::WebService_c_DisplayClass1_0__Class**)(modloader::win::memory::resolve_rva(0x04707328));
        inline app::WebService_c_DisplayClass1_0__Class* get_class() {
            return il2cpp::get_nested_class<app::WebService_c_DisplayClass1_0__Class>(type_info, "Moon.Race.Networking", "WebService", "<>c__DisplayClass1_0");
        }
        inline app::WebService_c_DisplayClass1_0* create() {
            return il2cpp::create_object<app::WebService_c_DisplayClass1_0>(get_class());
        }
    } // namespace WebService_c_DisplayClass1_0
} // namespace app::classes::types
