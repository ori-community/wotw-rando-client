#pragma once
#include <Modloader/app/structs/LegacyPressurePlate_c_DisplayClass8_0.h>
#include <Modloader/app/structs/LegacyPressurePlate_c_DisplayClass8_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyPressurePlate_c_DisplayClass8_0 {
        inline app::LegacyPressurePlate_c_DisplayClass8_0__Class** type_info() {
            static app::LegacyPressurePlate_c_DisplayClass8_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LegacyPressurePlate_c_DisplayClass8_0__Class**)(modloader::win::memory::resolve_rva(0x04722610));
            }
            return cache;
        }
        inline app::LegacyPressurePlate_c_DisplayClass8_0__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyPressurePlate_c_DisplayClass8_0__Class>(type_info(), "", "LegacyPressurePlate", "<>c__DisplayClass8_0");
        }
        inline app::LegacyPressurePlate_c_DisplayClass8_0* create() {
            return il2cpp::create_object<app::LegacyPressurePlate_c_DisplayClass8_0>(get_class());
        }
    } // namespace LegacyPressurePlate_c_DisplayClass8_0
} // namespace app::classes::types
