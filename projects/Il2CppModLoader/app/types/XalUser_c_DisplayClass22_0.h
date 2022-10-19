#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XalUser_c_DisplayClass22_0 {
        inline app::XalUser_c_DisplayClass22_0__Class** type_info = (app::XalUser_c_DisplayClass22_0__Class**)(modloader::win::memory::resolve_rva(0x0475FE48));
        inline app::XalUser_c_DisplayClass22_0__Class* get_class() {
            return il2cpp::get_nested_class<app::XalUser_c_DisplayClass22_0__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalUser", "<>c__DisplayClass22_0");
        }
        inline app::XalUser_c_DisplayClass22_0* create() {
            return il2cpp::create_object<app::XalUser_c_DisplayClass22_0>(get_class());
        }
    } // namespace XalUser_c_DisplayClass22_0
} // namespace app::classes::types
