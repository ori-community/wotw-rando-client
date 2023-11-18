#pragma once
#include <Modloader/app/structs/SpikeSlugEntity_c_DisplayClass57_1.h>
#include <Modloader/app/structs/SpikeSlugEntity_c_DisplayClass57_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpikeSlugEntity_c_DisplayClass57_1 {
        inline app::SpikeSlugEntity_c_DisplayClass57_1__Class** type_info() {
            static app::SpikeSlugEntity_c_DisplayClass57_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpikeSlugEntity_c_DisplayClass57_1__Class**)(modloader::win::memory::resolve_rva(0x04703710));
            }
            return cache;
        }
        inline app::SpikeSlugEntity_c_DisplayClass57_1__Class* get_class() {
            return il2cpp::get_nested_class<app::SpikeSlugEntity_c_DisplayClass57_1__Class>(type_info(), "", "SpikeSlugEntity", "<>c__DisplayClass57_1");
        }
        inline app::SpikeSlugEntity_c_DisplayClass57_1* create() {
            return il2cpp::create_object<app::SpikeSlugEntity_c_DisplayClass57_1>(get_class());
        }
    } // namespace SpikeSlugEntity_c_DisplayClass57_1
} // namespace app::classes::types
