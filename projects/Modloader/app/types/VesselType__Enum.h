#pragma once
#include <Modloader/app/structs/VesselType__Enum.h>
#include <Modloader/app/structs/VesselType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VesselType__Enum {
        inline app::VesselType__Enum__Class** type_info() {
            static app::VesselType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VesselType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VesselType__Enum__Class* get_class() {
            return il2cpp::get_class<app::VesselType__Enum__Class>(type_info(), "ScreenshotIcons", "VesselType");
        }
        inline app::VesselType__Enum* create() {
            return il2cpp::create_object<app::VesselType__Enum>(get_class());
        }
    } // namespace VesselType__Enum
} // namespace app::classes::types
