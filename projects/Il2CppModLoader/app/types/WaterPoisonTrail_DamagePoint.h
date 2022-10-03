#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaterPoisonTrail_DamagePoint {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WaterPoisonTrail_DamagePoint__Class** type_info;
        inline app::WaterPoisonTrail_DamagePoint__Class* get_class() {
            return il2cpp::get_nested_class<app::WaterPoisonTrail_DamagePoint__Class>(type_info, "", "WaterPoisonTrail", "DamagePoint");
        }
        inline app::WaterPoisonTrail_DamagePoint* create() {
            return il2cpp::create_object<app::WaterPoisonTrail_DamagePoint>(get_class());
        }
        inline app::WaterPoisonTrail_DamagePoint__Boxed* box(app::WaterPoisonTrail_DamagePoint value) {
            return il2cpp::box_value<app::WaterPoisonTrail_DamagePoint__Boxed>(get_class(), value);
        }
        inline app::WaterPoisonTrail_DamagePoint__Array* create_array(int size) {
            return il2cpp::array_new<app::WaterPoisonTrail_DamagePoint__Array>(get_class(), size);
        }
    } // namespace WaterPoisonTrail_DamagePoint
} // namespace app::classes::types
