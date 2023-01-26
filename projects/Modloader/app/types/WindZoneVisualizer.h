#pragma once
#include <Modloader/app/structs/WindZoneVisualizer.h>
#include <Modloader/app/structs/WindZoneVisualizer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WindZoneVisualizer {
        inline app::WindZoneVisualizer__Class** type_info() {
            static app::WindZoneVisualizer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WindZoneVisualizer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WindZoneVisualizer__Class* get_class() {
            return il2cpp::get_class<app::WindZoneVisualizer__Class>(type_info(), "", "WindZoneVisualizer");
        }
        inline app::WindZoneVisualizer* create() {
            return il2cpp::create_object<app::WindZoneVisualizer>(get_class());
        }
    } // namespace WindZoneVisualizer
} // namespace app::classes::types
