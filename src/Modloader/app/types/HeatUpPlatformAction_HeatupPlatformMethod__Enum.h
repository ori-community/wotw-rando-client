#pragma once
#include <Modloader/app/structs/HeatUpPlatformAction_HeatupPlatformMethod__Enum.h>
#include <Modloader/app/structs/HeatUpPlatformAction_HeatupPlatformMethod__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HeatUpPlatformAction_HeatupPlatformMethod__Enum {
        inline app::HeatUpPlatformAction_HeatupPlatformMethod__Enum__Class** type_info() {
            static app::HeatUpPlatformAction_HeatupPlatformMethod__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HeatUpPlatformAction_HeatupPlatformMethod__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HeatUpPlatformAction_HeatupPlatformMethod__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HeatUpPlatformAction_HeatupPlatformMethod__Enum__Class>(type_info(), "", "HeatUpPlatformAction", "HeatupPlatformMethod");
        }
        inline app::HeatUpPlatformAction_HeatupPlatformMethod__Enum* create() {
            return il2cpp::create_object<app::HeatUpPlatformAction_HeatupPlatformMethod__Enum>(get_class());
        }
    } // namespace HeatUpPlatformAction_HeatupPlatformMethod__Enum
} // namespace app::classes::types
