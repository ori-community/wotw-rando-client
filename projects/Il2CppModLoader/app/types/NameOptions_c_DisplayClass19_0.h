#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NameOptions_c_DisplayClass19_0 {
        inline app::NameOptions_c_DisplayClass19_0__Class** type_info = (app::NameOptions_c_DisplayClass19_0__Class**)(modloader::win::memory::resolve_rva(0x04782DA8));
        inline app::NameOptions_c_DisplayClass19_0__Class* get_class() {
            return il2cpp::get_nested_class<app::NameOptions_c_DisplayClass19_0__Class>(type_info, "", "NameOptions", "<>c__DisplayClass19_0");
        }
        inline app::NameOptions_c_DisplayClass19_0* create() {
            return il2cpp::create_object<app::NameOptions_c_DisplayClass19_0>(get_class());
        }
    } // namespace NameOptions_c_DisplayClass19_0
} // namespace app::classes::types
