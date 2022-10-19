#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OneDsWebRequestPlugin_c_DisplayClass0_0 {
        inline app::OneDsWebRequestPlugin_c_DisplayClass0_0__Class** type_info = (app::OneDsWebRequestPlugin_c_DisplayClass0_0__Class**)(modloader::win::memory::resolve_rva(0x04772288));
        inline app::OneDsWebRequestPlugin_c_DisplayClass0_0__Class* get_class() {
            return il2cpp::get_nested_class<app::OneDsWebRequestPlugin_c_DisplayClass0_0__Class>(type_info, "PlayFab.Internal", "OneDsWebRequestPlugin", "<>c__DisplayClass0_0");
        }
        inline app::OneDsWebRequestPlugin_c_DisplayClass0_0* create() {
            return il2cpp::create_object<app::OneDsWebRequestPlugin_c_DisplayClass0_0>(get_class());
        }
    } // namespace OneDsWebRequestPlugin_c_DisplayClass0_0
} // namespace app::classes::types
