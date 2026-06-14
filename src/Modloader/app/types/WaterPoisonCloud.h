#pragma once
#include <Modloader/app/structs/WaterPoisonCloud.h>
#include <Modloader/app/structs/WaterPoisonCloud__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterPoisonCloud {
        inline app::WaterPoisonCloud__Class** type_info() {
            static app::WaterPoisonCloud__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterPoisonCloud__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterPoisonCloud__Class* get_class() {
            return il2cpp::get_class<app::WaterPoisonCloud__Class>(type_info(), "", "WaterPoisonCloud");
        }
        inline app::WaterPoisonCloud* create() {
            return il2cpp::create_object<app::WaterPoisonCloud>(get_class());
        }
    } // namespace WaterPoisonCloud
} // namespace app::classes::types
