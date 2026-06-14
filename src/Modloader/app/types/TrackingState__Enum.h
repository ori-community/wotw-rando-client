#pragma once
#include <Modloader/app/structs/TrackingState__Enum.h>
#include <Modloader/app/structs/TrackingState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TrackingState__Enum {
        inline app::TrackingState__Enum__Class** type_info() {
            static app::TrackingState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TrackingState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TrackingState__Enum__Class* get_class() {
            return il2cpp::get_class<app::TrackingState__Enum__Class>(type_info(), "UnityEngine.Experimental.XR", "TrackingState");
        }
        inline app::TrackingState__Enum* create() {
            return il2cpp::create_object<app::TrackingState__Enum>(get_class());
        }
    } // namespace TrackingState__Enum
} // namespace app::classes::types
