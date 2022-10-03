#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraPositionTracker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraPositionTracker__Class** type_info;
        inline app::CameraPositionTracker__Class* get_class() {
            return il2cpp::get_class<app::CameraPositionTracker__Class>(type_info, "", "CameraPositionTracker");
        }
        inline app::CameraPositionTracker* create() {
            return il2cpp::create_object<app::CameraPositionTracker>(get_class());
        }
    } // namespace CameraPositionTracker
} // namespace app::classes::types
