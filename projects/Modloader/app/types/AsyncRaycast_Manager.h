#pragma once
#include <Modloader/app/structs/AsyncRaycast_Manager.h>
#include <Modloader/app/structs/AsyncRaycast_Manager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsyncRaycast_Manager {
        inline app::AsyncRaycast_Manager__Class** type_info() {
            static app::AsyncRaycast_Manager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AsyncRaycast_Manager__Class**)(modloader::win::memory::resolve_rva(0x04758340));
            }
            return cache;
        }
        inline app::AsyncRaycast_Manager__Class* get_class() {
            return il2cpp::get_nested_class<app::AsyncRaycast_Manager__Class>(type_info(), "", "AsyncRaycast", "Manager");
        }
        inline app::AsyncRaycast_Manager* create() {
            return il2cpp::create_object<app::AsyncRaycast_Manager>(get_class());
        }
    } // namespace AsyncRaycast_Manager
} // namespace app::classes::types
