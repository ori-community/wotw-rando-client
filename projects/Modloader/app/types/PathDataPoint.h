#pragma once
#include <Modloader/app/structs/PathDataPoint.h>
#include <Modloader/app/structs/PathDataPoint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PathDataPoint {
        inline app::PathDataPoint__Class** type_info() {
            static app::PathDataPoint__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PathDataPoint__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PathDataPoint__Class* get_class() {
            return il2cpp::get_class<app::PathDataPoint__Class>(type_info(), "Moon.Telemetry", "PathDataPoint");
        }
        inline app::PathDataPoint* create() {
            return il2cpp::create_object<app::PathDataPoint>(get_class());
        }
    } // namespace PathDataPoint
} // namespace app::classes::types
