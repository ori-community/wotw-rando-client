#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpikeSlugEntity_c_DisplayClass57_1 {
        inline app::SpikeSlugEntity_c_DisplayClass57_1__Class** type_info = (app::SpikeSlugEntity_c_DisplayClass57_1__Class**)(modloader::win::memory::resolve_rva(0x04703710));
        inline app::SpikeSlugEntity_c_DisplayClass57_1__Class* get_class() {
            return il2cpp::get_nested_class<app::SpikeSlugEntity_c_DisplayClass57_1__Class>(type_info, "", "SpikeSlugEntity", "<>c__DisplayClass57_1");
        }
        inline app::SpikeSlugEntity_c_DisplayClass57_1* create() {
            return il2cpp::create_object<app::SpikeSlugEntity_c_DisplayClass57_1>(get_class());
        }
    } // namespace SpikeSlugEntity_c_DisplayClass57_1
} // namespace app::classes::types
