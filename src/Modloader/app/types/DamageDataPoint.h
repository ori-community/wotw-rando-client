#pragma once
#include <Modloader/app/structs/DamageDataPoint.h>
#include <Modloader/app/structs/DamageDataPoint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageDataPoint {
        inline app::DamageDataPoint__Class** type_info() {
            static app::DamageDataPoint__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageDataPoint__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageDataPoint__Class* get_class() {
            return il2cpp::get_class<app::DamageDataPoint__Class>(type_info(), "Moon.Telemetry", "DamageDataPoint");
        }
        inline app::DamageDataPoint* create() {
            return il2cpp::create_object<app::DamageDataPoint>(get_class());
        }
    } // namespace DamageDataPoint
} // namespace app::classes::types
