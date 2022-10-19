#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WebService_c_DisplayClass2_0 {
        inline app::WebService_c_DisplayClass2_0__Class** type_info = (app::WebService_c_DisplayClass2_0__Class**)(modloader::win::memory::resolve_rva(0x04795CA0));
        inline app::WebService_c_DisplayClass2_0__Class* get_class() {
            return il2cpp::get_nested_class<app::WebService_c_DisplayClass2_0__Class>(type_info, "Moon.Race.Networking", "WebService", "<>c__DisplayClass2_0");
        }
        inline app::WebService_c_DisplayClass2_0* create() {
            return il2cpp::create_object<app::WebService_c_DisplayClass2_0>(get_class());
        }
    } // namespace WebService_c_DisplayClass2_0
} // namespace app::classes::types
