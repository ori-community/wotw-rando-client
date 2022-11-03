#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Locomotion_c_DisplayClass85_0 {
        inline app::Locomotion_c_DisplayClass85_0__Class** type_info = (app::Locomotion_c_DisplayClass85_0__Class**)(modloader::win::memory::resolve_rva(0x0475EC80));
        inline app::Locomotion_c_DisplayClass85_0__Class* get_class() {
            return il2cpp::get_nested_class<app::Locomotion_c_DisplayClass85_0__Class>(type_info, "Moon", "Locomotion", "<>c__DisplayClass85_0");
        }
        inline app::Locomotion_c_DisplayClass85_0* create() {
            return il2cpp::create_object<app::Locomotion_c_DisplayClass85_0>(get_class());
        }
    } // namespace Locomotion_c_DisplayClass85_0
} // namespace app::classes::types
