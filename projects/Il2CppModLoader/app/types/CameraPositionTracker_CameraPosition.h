#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraPositionTracker_CameraPosition {
        inline app::CameraPositionTracker_CameraPosition__Class** type_info = (app::CameraPositionTracker_CameraPosition__Class**)(modloader::win::memory::resolve_rva(0x0471F390));
        inline app::CameraPositionTracker_CameraPosition__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraPositionTracker_CameraPosition__Class>(type_info, "", "CameraPositionTracker", "CameraPosition");
        }
        inline app::CameraPositionTracker_CameraPosition* create() {
            return il2cpp::create_object<app::CameraPositionTracker_CameraPosition>(get_class());
        }
        inline app::CameraPositionTracker_CameraPosition__Array* create_array(int size) {
            return il2cpp::array_new<app::CameraPositionTracker_CameraPosition__Array>(get_class(), size);
        }
        inline app::CameraPositionTracker_CameraPosition__Array* create_array(const std::vector<app::CameraPositionTracker_CameraPosition*>& items) {
            return il2cpp::array_new<app::CameraPositionTracker_CameraPosition__Array>(get_class(), items);
        }
    } // namespace CameraPositionTracker_CameraPosition
} // namespace app::classes::types
