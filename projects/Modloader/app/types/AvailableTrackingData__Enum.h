#pragma once
#include <Modloader/app/structs/AvailableTrackingData__Enum.h>
#include <Modloader/app/structs/AvailableTrackingData__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AvailableTrackingData__Enum {
        inline app::AvailableTrackingData__Enum__Class** type_info() {
            static app::AvailableTrackingData__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AvailableTrackingData__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AvailableTrackingData__Enum__Class* get_class() {
            return il2cpp::get_class<app::AvailableTrackingData__Enum__Class>(type_info(), "UnityEngine.XR", "AvailableTrackingData");
        }
        inline app::AvailableTrackingData__Enum* create() {
            return il2cpp::create_object<app::AvailableTrackingData__Enum>(get_class());
        }
    } // namespace AvailableTrackingData__Enum
} // namespace app::classes::types
