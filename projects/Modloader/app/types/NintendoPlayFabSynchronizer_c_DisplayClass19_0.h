#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NintendoPlayFabSynchronizer_c_DisplayClass19_0 {
        inline app::NintendoPlayFabSynchronizer_c_DisplayClass19_0__Class** type_info = (app::NintendoPlayFabSynchronizer_c_DisplayClass19_0__Class**)(modloader::win::memory::resolve_rva(0x04762208));
        inline app::NintendoPlayFabSynchronizer_c_DisplayClass19_0__Class* get_class() {
            return il2cpp::get_nested_class<app::NintendoPlayFabSynchronizer_c_DisplayClass19_0__Class>(type_info, "SystemIntegration", "NintendoPlayFabSynchronizer", "<>c__DisplayClass19_0");
        }
        inline app::NintendoPlayFabSynchronizer_c_DisplayClass19_0* create() {
            return il2cpp::create_object<app::NintendoPlayFabSynchronizer_c_DisplayClass19_0>(get_class());
        }
    } // namespace NintendoPlayFabSynchronizer_c_DisplayClass19_0
} // namespace app::classes::types
