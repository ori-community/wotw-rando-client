#pragma once
#include <Modloader/app/structs/OneDsUnityHttpPlugin_c_DisplayClass1_0.h>
#include <Modloader/app/structs/OneDsUnityHttpPlugin_c_DisplayClass1_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OneDsUnityHttpPlugin_c_DisplayClass1_0 {
        inline app::OneDsUnityHttpPlugin_c_DisplayClass1_0__Class** type_info() {
            static app::OneDsUnityHttpPlugin_c_DisplayClass1_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OneDsUnityHttpPlugin_c_DisplayClass1_0__Class**)(modloader::win::memory::resolve_rva(0x04752548));
            }
            return cache;
        }
        inline app::OneDsUnityHttpPlugin_c_DisplayClass1_0__Class* get_class() {
            return il2cpp::get_nested_class<app::OneDsUnityHttpPlugin_c_DisplayClass1_0__Class>(type_info(), "PlayFab.Internal", "OneDsUnityHttpPlugin", "<>c__DisplayClass1_0");
        }
        inline app::OneDsUnityHttpPlugin_c_DisplayClass1_0* create() {
            return il2cpp::create_object<app::OneDsUnityHttpPlugin_c_DisplayClass1_0>(get_class());
        }
    } // namespace OneDsUnityHttpPlugin_c_DisplayClass1_0
} // namespace app::classes::types
