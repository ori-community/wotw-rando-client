#pragma once
#include <Modloader/app/structs/Locomotion_c_DisplayClass85_0.h>
#include <Modloader/app/structs/Locomotion_c_DisplayClass85_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Locomotion_c_DisplayClass85_0 {
        inline app::Locomotion_c_DisplayClass85_0__Class** type_info() {
            static app::Locomotion_c_DisplayClass85_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Locomotion_c_DisplayClass85_0__Class**)(modloader::win::memory::resolve_rva(0x0475EC80));
            }
            return cache;
        }
        inline app::Locomotion_c_DisplayClass85_0__Class* get_class() {
            return il2cpp::get_nested_class<app::Locomotion_c_DisplayClass85_0__Class>(type_info(), "Moon", "Locomotion", "<>c__DisplayClass85_0");
        }
        inline app::Locomotion_c_DisplayClass85_0* create() {
            return il2cpp::create_object<app::Locomotion_c_DisplayClass85_0>(get_class());
        }
    } // namespace Locomotion_c_DisplayClass85_0
} // namespace app::classes::types
