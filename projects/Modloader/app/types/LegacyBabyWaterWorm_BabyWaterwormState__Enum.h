#pragma once
#include <Modloader/app/structs/LegacyBabyWaterWorm_BabyWaterwormState__Enum.h>
#include <Modloader/app/structs/LegacyBabyWaterWorm_BabyWaterwormState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyBabyWaterWorm_BabyWaterwormState__Enum {
        inline app::LegacyBabyWaterWorm_BabyWaterwormState__Enum__Class** type_info() {
            static app::LegacyBabyWaterWorm_BabyWaterwormState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LegacyBabyWaterWorm_BabyWaterwormState__Enum__Class**)(modloader::win::memory::resolve_rva(0x047382E8));
            }
            return cache;
        }
        inline app::LegacyBabyWaterWorm_BabyWaterwormState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyBabyWaterWorm_BabyWaterwormState__Enum__Class>(type_info(), "", "LegacyBabyWaterWorm", "BabyWaterwormState");
        }
        inline app::LegacyBabyWaterWorm_BabyWaterwormState__Enum* create() {
            return il2cpp::create_object<app::LegacyBabyWaterWorm_BabyWaterwormState__Enum>(get_class());
        }
    } // namespace LegacyBabyWaterWorm_BabyWaterwormState__Enum
} // namespace app::classes::types
