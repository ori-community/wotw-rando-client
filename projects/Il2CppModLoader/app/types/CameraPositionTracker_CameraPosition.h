#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraPositionTracker_CameraPosition {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraPositionTracker_CameraPosition__Class** type_info;
        inline app::CameraPositionTracker_CameraPosition__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraPositionTracker_CameraPosition__Class>(type_info, "", "CameraPositionTracker", "CameraPosition");
        }
        inline app::CameraPositionTracker_CameraPosition* create() {
            return il2cpp::create_object<app::CameraPositionTracker_CameraPosition>(get_class());
        }
        inline app::CameraPositionTracker_CameraPosition__Array* create_array(int size) {
            return il2cpp::array_new<app::CameraPositionTracker_CameraPosition__Array>(get_class(), size);
        }
    } // namespace CameraPositionTracker_CameraPosition
} // namespace app::classes::types
