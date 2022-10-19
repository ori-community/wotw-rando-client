#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TrackingState__Enum {
        namespace {
            inline app::TrackingState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TrackingState__Enum__Class** type_info = &type_info_ref;
        inline app::TrackingState__Enum__Class* get_class() {
            return il2cpp::get_class<app::TrackingState__Enum__Class>(type_info, "UnityEngine.Experimental.XR", "TrackingState");
        }
        inline app::TrackingState__Enum* create() {
            return il2cpp::create_object<app::TrackingState__Enum>(get_class());
        }
    } // namespace TrackingState__Enum
} // namespace app::classes::types
