#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InputTracking_TrackingStateEventType__Enum {
        inline app::InputTracking_TrackingStateEventType__Enum__Class** type_info = (app::InputTracking_TrackingStateEventType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04799068));
        inline app::InputTracking_TrackingStateEventType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::InputTracking_TrackingStateEventType__Enum__Class>(type_info, "UnityEngine.XR", "InputTracking", "TrackingStateEventType");
        }
        inline app::InputTracking_TrackingStateEventType__Enum* create() {
            return il2cpp::create_object<app::InputTracking_TrackingStateEventType__Enum>(get_class());
        }
    } // namespace InputTracking_TrackingStateEventType__Enum
} // namespace app::classes::types
