#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraPositionTracker_CameraPosition__Array {
        namespace {
            inline app::CameraPositionTracker_CameraPosition__Array__Class* type_info_ref = nullptr;
        }
        inline app::CameraPositionTracker_CameraPosition__Array__Class** type_info = &type_info_ref;
        inline app::CameraPositionTracker_CameraPosition__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraPositionTracker_CameraPosition__Array__Class>(type_info, "", "CameraPositionTracker+CameraPosition[]");
        }
        inline app::CameraPositionTracker_CameraPosition__Array* create() {
            return il2cpp::create_object<app::CameraPositionTracker_CameraPosition__Array>(get_class());
        }
    } // namespace CameraPositionTracker_CameraPosition__Array
} // namespace app::classes::types
