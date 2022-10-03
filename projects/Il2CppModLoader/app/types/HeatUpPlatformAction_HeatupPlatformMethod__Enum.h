#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HeatUpPlatformAction_HeatupPlatformMethod__Enum {
        namespace {
            app::HeatUpPlatformAction_HeatupPlatformMethod__Enum__Class* type_info_ref = nullptr;
        }
        app::HeatUpPlatformAction_HeatupPlatformMethod__Enum__Class** type_info = &type_info_ref;
        inline app::HeatUpPlatformAction_HeatupPlatformMethod__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HeatUpPlatformAction_HeatupPlatformMethod__Enum__Class>(type_info, "", "HeatUpPlatformAction", "HeatupPlatformMethod");
        }
        inline app::HeatUpPlatformAction_HeatupPlatformMethod__Enum* create() {
            return il2cpp::create_object<app::HeatUpPlatformAction_HeatupPlatformMethod__Enum>(get_class());
        }
    } // namespace HeatUpPlatformAction_HeatupPlatformMethod__Enum
} // namespace app::classes::types
