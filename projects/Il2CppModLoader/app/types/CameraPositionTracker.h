#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraPositionTracker {
        inline app::CameraPositionTracker__Class** type_info = (app::CameraPositionTracker__Class**)(modloader::win::memory::resolve_rva(0x04706CB0));
        inline app::CameraPositionTracker__Class* get_class() {
            return il2cpp::get_class<app::CameraPositionTracker__Class>(type_info, "", "CameraPositionTracker");
        }
        inline app::CameraPositionTracker* create() {
            return il2cpp::create_object<app::CameraPositionTracker>(get_class());
        }
    } // namespace CameraPositionTracker
} // namespace app::classes::types
