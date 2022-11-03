#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AsyncRaycast_State__Enum {
        inline app::AsyncRaycast_State__Enum__Class** type_info = (app::AsyncRaycast_State__Enum__Class**)(modloader::win::memory::resolve_rva(0x0478CCA0));
        inline app::AsyncRaycast_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AsyncRaycast_State__Enum__Class>(type_info, "", "AsyncRaycast", "State");
        }
        inline app::AsyncRaycast_State__Enum* create() {
            return il2cpp::create_object<app::AsyncRaycast_State__Enum>(get_class());
        }
    } // namespace AsyncRaycast_State__Enum
} // namespace app::classes::types
