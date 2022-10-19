#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NameOptions_c_DisplayClass19_1 {
        inline app::NameOptions_c_DisplayClass19_1__Class** type_info = (app::NameOptions_c_DisplayClass19_1__Class**)(modloader::win::memory::resolve_rva(0x04746890));
        inline app::NameOptions_c_DisplayClass19_1__Class* get_class() {
            return il2cpp::get_nested_class<app::NameOptions_c_DisplayClass19_1__Class>(type_info, "", "NameOptions", "<>c__DisplayClass19_1");
        }
        inline app::NameOptions_c_DisplayClass19_1* create() {
            return il2cpp::create_object<app::NameOptions_c_DisplayClass19_1>(get_class());
        }
    } // namespace NameOptions_c_DisplayClass19_1
} // namespace app::classes::types
