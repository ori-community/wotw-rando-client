#pragma once
#include <Modloader/app/structs/InWaterBrain.h>
#include <Modloader/app/structs/InWaterBrain__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InWaterBrain {
        inline app::InWaterBrain__Class** type_info() {
            static app::InWaterBrain__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InWaterBrain__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InWaterBrain__Class* get_class() {
            return il2cpp::get_class<app::InWaterBrain__Class>(type_info(), "", "InWaterBrain");
        }
        inline app::InWaterBrain* create() {
            return il2cpp::create_object<app::InWaterBrain>(get_class());
        }
    } // namespace InWaterBrain
} // namespace app::classes::types
