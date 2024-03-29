#pragma once
#include <Modloader/app/structs/ControlsScreen_c_DisplayClass11_1.h>
#include <Modloader/app/structs/ControlsScreen_c_DisplayClass11_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ControlsScreen_c_DisplayClass11_1 {
        inline app::ControlsScreen_c_DisplayClass11_1__Class** type_info() {
            static app::ControlsScreen_c_DisplayClass11_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ControlsScreen_c_DisplayClass11_1__Class**)(modloader::win::memory::resolve_rva(0x0471E8E0));
            }
            return cache;
        }
        inline app::ControlsScreen_c_DisplayClass11_1__Class* get_class() {
            return il2cpp::get_nested_class<app::ControlsScreen_c_DisplayClass11_1__Class>(type_info(), "", "ControlsScreen", "<>c__DisplayClass11_1");
        }
        inline app::ControlsScreen_c_DisplayClass11_1* create() {
            return il2cpp::create_object<app::ControlsScreen_c_DisplayClass11_1>(get_class());
        }
    } // namespace ControlsScreen_c_DisplayClass11_1
} // namespace app::classes::types
