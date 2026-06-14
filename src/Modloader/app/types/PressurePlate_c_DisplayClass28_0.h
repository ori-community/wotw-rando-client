#pragma once
#include <Modloader/app/structs/PressurePlate_c_DisplayClass28_0.h>
#include <Modloader/app/structs/PressurePlate_c_DisplayClass28_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PressurePlate_c_DisplayClass28_0 {
        inline app::PressurePlate_c_DisplayClass28_0__Class** type_info() {
            static app::PressurePlate_c_DisplayClass28_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PressurePlate_c_DisplayClass28_0__Class**)(modloader::win::memory::resolve_rva(0x04793150));
            }
            return cache;
        }
        inline app::PressurePlate_c_DisplayClass28_0__Class* get_class() {
            return il2cpp::get_nested_class<app::PressurePlate_c_DisplayClass28_0__Class>(type_info(), "", "PressurePlate", "<>c__DisplayClass28_0");
        }
        inline app::PressurePlate_c_DisplayClass28_0* create() {
            return il2cpp::create_object<app::PressurePlate_c_DisplayClass28_0>(get_class());
        }
    } // namespace PressurePlate_c_DisplayClass28_0
} // namespace app::classes::types
