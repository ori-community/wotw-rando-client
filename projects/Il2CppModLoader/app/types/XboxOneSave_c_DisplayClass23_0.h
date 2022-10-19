#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XboxOneSave_c_DisplayClass23_0 {
        inline app::XboxOneSave_c_DisplayClass23_0__Class** type_info = (app::XboxOneSave_c_DisplayClass23_0__Class**)(modloader::win::memory::resolve_rva(0x04758B68));
        inline app::XboxOneSave_c_DisplayClass23_0__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxOneSave_c_DisplayClass23_0__Class>(type_info, "", "XboxOneSave", "<>c__DisplayClass23_0");
        }
        inline app::XboxOneSave_c_DisplayClass23_0* create() {
            return il2cpp::create_object<app::XboxOneSave_c_DisplayClass23_0>(get_class());
        }
    } // namespace XboxOneSave_c_DisplayClass23_0
} // namespace app::classes::types
