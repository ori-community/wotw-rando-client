#pragma once
#include <Modloader/app/structs/ControlsScreen_c_DisplayClass11_0.h>
#include <Modloader/app/structs/ControlsScreen_c_DisplayClass11_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ControlsScreen_c_DisplayClass11_0 {
        inline app::ControlsScreen_c_DisplayClass11_0__Class** type_info() {
            static app::ControlsScreen_c_DisplayClass11_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ControlsScreen_c_DisplayClass11_0__Class**)(modloader::win::memory::resolve_rva(0x0477FFA8));
            }
            return cache;
        }
        inline app::ControlsScreen_c_DisplayClass11_0__Class* get_class() {
            return il2cpp::get_nested_class<app::ControlsScreen_c_DisplayClass11_0__Class>(type_info(), "", "ControlsScreen", "<>c__DisplayClass11_0");
        }
        inline app::ControlsScreen_c_DisplayClass11_0* create() {
            return il2cpp::create_object<app::ControlsScreen_c_DisplayClass11_0>(get_class());
        }
    } // namespace ControlsScreen_c_DisplayClass11_0
} // namespace app::classes::types
