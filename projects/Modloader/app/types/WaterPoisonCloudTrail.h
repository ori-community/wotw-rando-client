#pragma once
#include <Modloader/app/structs/WaterPoisonCloudTrail.h>
#include <Modloader/app/structs/WaterPoisonCloudTrail__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterPoisonCloudTrail {
        inline app::WaterPoisonCloudTrail__Class** type_info() {
            static app::WaterPoisonCloudTrail__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterPoisonCloudTrail__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterPoisonCloudTrail__Class* get_class() {
            return il2cpp::get_class<app::WaterPoisonCloudTrail__Class>(type_info(), "", "WaterPoisonCloudTrail");
        }
        inline app::WaterPoisonCloudTrail* create() {
            return il2cpp::create_object<app::WaterPoisonCloudTrail>(get_class());
        }
    } // namespace WaterPoisonCloudTrail
} // namespace app::classes::types
