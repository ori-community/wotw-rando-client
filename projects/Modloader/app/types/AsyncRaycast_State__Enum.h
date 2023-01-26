#pragma once
#include <Modloader/app/structs/AsyncRaycast_State__Enum.h>
#include <Modloader/app/structs/AsyncRaycast_State__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsyncRaycast_State__Enum {
        inline app::AsyncRaycast_State__Enum__Class** type_info() {
            static app::AsyncRaycast_State__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AsyncRaycast_State__Enum__Class**)(modloader::win::memory::resolve_rva(0x0478CCA0));
            }
            return cache;
        }
        inline app::AsyncRaycast_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AsyncRaycast_State__Enum__Class>(type_info(), "", "AsyncRaycast", "State");
        }
        inline app::AsyncRaycast_State__Enum* create() {
            return il2cpp::create_object<app::AsyncRaycast_State__Enum>(get_class());
        }
    } // namespace AsyncRaycast_State__Enum
} // namespace app::classes::types
