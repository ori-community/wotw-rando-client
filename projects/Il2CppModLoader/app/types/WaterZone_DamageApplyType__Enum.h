#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaterZone_DamageApplyType__Enum {
        namespace {
            app::WaterZone_DamageApplyType__Enum__Class* type_info_ref = nullptr;
        }
        app::WaterZone_DamageApplyType__Enum__Class** type_info = &type_info_ref;
        inline app::WaterZone_DamageApplyType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::WaterZone_DamageApplyType__Enum__Class>(type_info, "", "WaterZone", "DamageApplyType");
        }
        inline app::WaterZone_DamageApplyType__Enum* create() {
            return il2cpp::create_object<app::WaterZone_DamageApplyType__Enum>(get_class());
        }
    } // namespace WaterZone_DamageApplyType__Enum
} // namespace app::classes::types
