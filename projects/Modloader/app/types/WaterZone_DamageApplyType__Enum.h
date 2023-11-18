#pragma once
#include <Modloader/app/structs/WaterZone_DamageApplyType__Enum.h>
#include <Modloader/app/structs/WaterZone_DamageApplyType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterZone_DamageApplyType__Enum {
        inline app::WaterZone_DamageApplyType__Enum__Class** type_info() {
            static app::WaterZone_DamageApplyType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterZone_DamageApplyType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterZone_DamageApplyType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::WaterZone_DamageApplyType__Enum__Class>(type_info(), "", "WaterZone", "DamageApplyType");
        }
        inline app::WaterZone_DamageApplyType__Enum* create() {
            return il2cpp::create_object<app::WaterZone_DamageApplyType__Enum>(get_class());
        }
    } // namespace WaterZone_DamageApplyType__Enum
} // namespace app::classes::types
