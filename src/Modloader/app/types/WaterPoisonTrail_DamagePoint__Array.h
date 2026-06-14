#pragma once
#include <Modloader/app/structs/WaterPoisonTrail_DamagePoint__Array.h>
#include <Modloader/app/structs/WaterPoisonTrail_DamagePoint__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterPoisonTrail_DamagePoint__Array {
        inline app::WaterPoisonTrail_DamagePoint__Array__Class** type_info() {
            static app::WaterPoisonTrail_DamagePoint__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterPoisonTrail_DamagePoint__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterPoisonTrail_DamagePoint__Array__Class* get_class() {
            return il2cpp::get_class<app::WaterPoisonTrail_DamagePoint__Array__Class>(type_info(), "", "WaterPoisonTrail+DamagePoint[]");
        }
        inline app::WaterPoisonTrail_DamagePoint__Array* create() {
            return il2cpp::create_object<app::WaterPoisonTrail_DamagePoint__Array>(get_class());
        }
    } // namespace WaterPoisonTrail_DamagePoint__Array
} // namespace app::classes::types
