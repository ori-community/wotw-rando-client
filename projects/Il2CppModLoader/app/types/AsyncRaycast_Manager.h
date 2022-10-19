#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AsyncRaycast_Manager {
        inline app::AsyncRaycast_Manager__Class** type_info = (app::AsyncRaycast_Manager__Class**)(modloader::win::memory::resolve_rva(0x04758340));
        inline app::AsyncRaycast_Manager__Class* get_class() {
            return il2cpp::get_nested_class<app::AsyncRaycast_Manager__Class>(type_info, "", "AsyncRaycast", "Manager");
        }
        inline app::AsyncRaycast_Manager* create() {
            return il2cpp::create_object<app::AsyncRaycast_Manager>(get_class());
        }
    } // namespace AsyncRaycast_Manager
} // namespace app::classes::types
