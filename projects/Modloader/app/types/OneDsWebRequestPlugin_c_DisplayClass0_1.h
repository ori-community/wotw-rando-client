#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OneDsWebRequestPlugin_c_DisplayClass0_1 {
        inline app::OneDsWebRequestPlugin_c_DisplayClass0_1__Class** type_info = (app::OneDsWebRequestPlugin_c_DisplayClass0_1__Class**)(modloader::win::memory::resolve_rva(0x04715CF8));
        inline app::OneDsWebRequestPlugin_c_DisplayClass0_1__Class* get_class() {
            return il2cpp::get_nested_class<app::OneDsWebRequestPlugin_c_DisplayClass0_1__Class>(type_info, "PlayFab.Internal", "OneDsWebRequestPlugin", "<>c__DisplayClass0_1");
        }
        inline app::OneDsWebRequestPlugin_c_DisplayClass0_1* create() {
            return il2cpp::create_object<app::OneDsWebRequestPlugin_c_DisplayClass0_1>(get_class());
        }
    } // namespace OneDsWebRequestPlugin_c_DisplayClass0_1
} // namespace app::classes::types
