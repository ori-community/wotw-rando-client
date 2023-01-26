#pragma once
#include <Modloader/app/structs/LegacyEntity_c_DisplayClass69_0.h>
#include <Modloader/app/structs/LegacyEntity_c_DisplayClass69_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyEntity_c_DisplayClass69_0 {
        inline app::LegacyEntity_c_DisplayClass69_0__Class** type_info() {
            static app::LegacyEntity_c_DisplayClass69_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LegacyEntity_c_DisplayClass69_0__Class**)(modloader::win::memory::resolve_rva(0x0470B640));
            }
            return cache;
        }
        inline app::LegacyEntity_c_DisplayClass69_0__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyEntity_c_DisplayClass69_0__Class>(type_info(), "", "LegacyEntity", "<>c__DisplayClass69_0");
        }
        inline app::LegacyEntity_c_DisplayClass69_0* create() {
            return il2cpp::create_object<app::LegacyEntity_c_DisplayClass69_0>(get_class());
        }
    } // namespace LegacyEntity_c_DisplayClass69_0
} // namespace app::classes::types
