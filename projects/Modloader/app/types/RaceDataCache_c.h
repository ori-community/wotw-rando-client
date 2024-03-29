#pragma once
#include <Modloader/app/structs/RaceDataCache_c.h>
#include <Modloader/app/structs/RaceDataCache_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceDataCache_c {
        inline app::RaceDataCache_c__Class** type_info() {
            static app::RaceDataCache_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RaceDataCache_c__Class**)(modloader::win::memory::resolve_rva(0x04774320));
            }
            return cache;
        }
        inline app::RaceDataCache_c__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceDataCache_c__Class>(type_info(), "SystemIntegration.Races", "RaceDataCache", "<>c");
        }
        inline app::RaceDataCache_c* create() {
            return il2cpp::create_object<app::RaceDataCache_c>(get_class());
        }
    } // namespace RaceDataCache_c
} // namespace app::classes::types
