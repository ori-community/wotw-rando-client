#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AsyncRaycast_Result__Enum {
        inline app::AsyncRaycast_Result__Enum__Class** type_info = (app::AsyncRaycast_Result__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475F490));
        inline app::AsyncRaycast_Result__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AsyncRaycast_Result__Enum__Class>(type_info, "", "AsyncRaycast", "Result");
        }
        inline app::AsyncRaycast_Result__Enum* create() {
            return il2cpp::create_object<app::AsyncRaycast_Result__Enum>(get_class());
        }
    } // namespace AsyncRaycast_Result__Enum
} // namespace app::classes::types
