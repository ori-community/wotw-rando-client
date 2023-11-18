#pragma once
#include <Modloader/app/structs/DeathDataPoint.h>
#include <Modloader/app/structs/DeathDataPoint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeathDataPoint {
        inline app::DeathDataPoint__Class** type_info() {
            static app::DeathDataPoint__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DeathDataPoint__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DeathDataPoint__Class* get_class() {
            return il2cpp::get_class<app::DeathDataPoint__Class>(type_info(), "Moon.Telemetry", "DeathDataPoint");
        }
        inline app::DeathDataPoint* create() {
            return il2cpp::create_object<app::DeathDataPoint>(get_class());
        }
    } // namespace DeathDataPoint
} // namespace app::classes::types
