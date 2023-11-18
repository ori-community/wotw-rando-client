#pragma once
#include <Modloader/app/structs/WorldEvents_c_DisplayClass2_0.h>
#include <Modloader/app/structs/WorldEvents_c_DisplayClass2_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WorldEvents_c_DisplayClass2_0 {
        inline app::WorldEvents_c_DisplayClass2_0__Class** type_info() {
            static app::WorldEvents_c_DisplayClass2_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WorldEvents_c_DisplayClass2_0__Class**)(modloader::win::memory::resolve_rva(0x0475F698));
            }
            return cache;
        }
        inline app::WorldEvents_c_DisplayClass2_0__Class* get_class() {
            return il2cpp::get_nested_class<app::WorldEvents_c_DisplayClass2_0__Class>(type_info(), "", "WorldEvents", "<>c__DisplayClass2_0");
        }
        inline app::WorldEvents_c_DisplayClass2_0* create() {
            return il2cpp::create_object<app::WorldEvents_c_DisplayClass2_0>(get_class());
        }
    } // namespace WorldEvents_c_DisplayClass2_0
} // namespace app::classes::types
