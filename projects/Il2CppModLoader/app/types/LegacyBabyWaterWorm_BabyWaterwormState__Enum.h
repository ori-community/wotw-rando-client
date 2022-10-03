#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyBabyWaterWorm_BabyWaterwormState__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LegacyBabyWaterWorm_BabyWaterwormState__Enum__Class** type_info;
        inline app::LegacyBabyWaterWorm_BabyWaterwormState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyBabyWaterWorm_BabyWaterwormState__Enum__Class>(type_info, "", "LegacyBabyWaterWorm", "BabyWaterwormState");
        }
        inline app::LegacyBabyWaterWorm_BabyWaterwormState__Enum* create() {
            return il2cpp::create_object<app::LegacyBabyWaterWorm_BabyWaterwormState__Enum>(get_class());
        }
    } // namespace LegacyBabyWaterWorm_BabyWaterwormState__Enum
} // namespace app::classes::types
