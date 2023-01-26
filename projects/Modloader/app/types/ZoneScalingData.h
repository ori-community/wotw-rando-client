#pragma once
#include <Modloader/app/structs/ZoneScalingData.h>
#include <Modloader/app/structs/ZoneScalingData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ZoneScalingData {
        inline app::ZoneScalingData__Class** type_info() {
            static app::ZoneScalingData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ZoneScalingData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ZoneScalingData__Class* get_class() {
            return il2cpp::get_class<app::ZoneScalingData__Class>(type_info(), "", "ZoneScalingData");
        }
        inline app::ZoneScalingData* create() {
            return il2cpp::create_object<app::ZoneScalingData>(get_class());
        }
    } // namespace ZoneScalingData
} // namespace app::classes::types
