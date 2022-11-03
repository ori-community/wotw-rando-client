#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpikeSlugEntity_c_DisplayClass57_0 {
        inline app::SpikeSlugEntity_c_DisplayClass57_0__Class** type_info = (app::SpikeSlugEntity_c_DisplayClass57_0__Class**)(modloader::win::memory::resolve_rva(0x04747840));
        inline app::SpikeSlugEntity_c_DisplayClass57_0__Class* get_class() {
            return il2cpp::get_nested_class<app::SpikeSlugEntity_c_DisplayClass57_0__Class>(type_info, "", "SpikeSlugEntity", "<>c__DisplayClass57_0");
        }
        inline app::SpikeSlugEntity_c_DisplayClass57_0* create() {
            return il2cpp::create_object<app::SpikeSlugEntity_c_DisplayClass57_0>(get_class());
        }
    } // namespace SpikeSlugEntity_c_DisplayClass57_0
} // namespace app::classes::types
