#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XalUser_c_DisplayClass26_0 {
        inline app::XalUser_c_DisplayClass26_0__Class** type_info = (app::XalUser_c_DisplayClass26_0__Class**)(modloader::win::memory::resolve_rva(0x04789B78));
        inline app::XalUser_c_DisplayClass26_0__Class* get_class() {
            return il2cpp::get_nested_class<app::XalUser_c_DisplayClass26_0__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalUser", "<>c__DisplayClass26_0");
        }
        inline app::XalUser_c_DisplayClass26_0* create() {
            return il2cpp::create_object<app::XalUser_c_DisplayClass26_0>(get_class());
        }
    } // namespace XalUser_c_DisplayClass26_0
} // namespace app::classes::types
