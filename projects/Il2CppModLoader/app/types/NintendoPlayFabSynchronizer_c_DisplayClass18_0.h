#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NintendoPlayFabSynchronizer_c_DisplayClass18_0 {
        inline app::NintendoPlayFabSynchronizer_c_DisplayClass18_0__Class** type_info = (app::NintendoPlayFabSynchronizer_c_DisplayClass18_0__Class**)(modloader::win::memory::resolve_rva(0x04713B48));
        inline app::NintendoPlayFabSynchronizer_c_DisplayClass18_0__Class* get_class() {
            return il2cpp::get_nested_class<app::NintendoPlayFabSynchronizer_c_DisplayClass18_0__Class>(type_info, "SystemIntegration", "NintendoPlayFabSynchronizer", "<>c__DisplayClass18_0");
        }
        inline app::NintendoPlayFabSynchronizer_c_DisplayClass18_0* create() {
            return il2cpp::create_object<app::NintendoPlayFabSynchronizer_c_DisplayClass18_0>(get_class());
        }
    } // namespace NintendoPlayFabSynchronizer_c_DisplayClass18_0
} // namespace app::classes::types
