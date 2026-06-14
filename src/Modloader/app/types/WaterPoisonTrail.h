#pragma once
#include <Modloader/app/structs/WaterPoisonTrail.h>
#include <Modloader/app/structs/WaterPoisonTrail__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterPoisonTrail {
        inline app::WaterPoisonTrail__Class** type_info() {
            static app::WaterPoisonTrail__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterPoisonTrail__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterPoisonTrail__Class* get_class() {
            return il2cpp::get_class<app::WaterPoisonTrail__Class>(type_info(), "", "WaterPoisonTrail");
        }
        inline app::WaterPoisonTrail* create() {
            return il2cpp::create_object<app::WaterPoisonTrail>(get_class());
        }
    } // namespace WaterPoisonTrail
} // namespace app::classes::types
