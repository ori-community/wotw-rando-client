#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LoadingBootstrap_c_DisplayClass28_0 {
        inline app::LoadingBootstrap_c_DisplayClass28_0__Class** type_info = (app::LoadingBootstrap_c_DisplayClass28_0__Class**)(modloader::win::memory::resolve_rva(0x0477DFA8));
        inline app::LoadingBootstrap_c_DisplayClass28_0__Class* get_class() {
            return il2cpp::get_nested_class<app::LoadingBootstrap_c_DisplayClass28_0__Class>(type_info, "", "LoadingBootstrap", "<>c__DisplayClass28_0");
        }
        inline app::LoadingBootstrap_c_DisplayClass28_0* create() {
            return il2cpp::create_object<app::LoadingBootstrap_c_DisplayClass28_0>(get_class());
        }
    } // namespace LoadingBootstrap_c_DisplayClass28_0
} // namespace app::classes::types
