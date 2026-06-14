#pragma once
#include <Modloader/app/structs/StatsScreen_c.h>
#include <Modloader/app/structs/StatsScreen_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatsScreen_c {
        inline app::StatsScreen_c__Class** type_info() {
            static app::StatsScreen_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StatsScreen_c__Class**)(modloader::win::memory::resolve_rva(0x04746D50));
            }
            return cache;
        }
        inline app::StatsScreen_c__Class* get_class() {
            return il2cpp::get_nested_class<app::StatsScreen_c__Class>(type_info(), "", "StatsScreen", "<>c");
        }
        inline app::StatsScreen_c* create() {
            return il2cpp::create_object<app::StatsScreen_c>(get_class());
        }
    } // namespace StatsScreen_c
} // namespace app::classes::types
