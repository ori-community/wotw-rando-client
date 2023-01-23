#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AsyncRaycast__Class.h>
#include <Modloader/app/structs/AsyncRaycast.h>
#include <Modloader/app/structs/AsyncRaycast__Array.h>

namespace app::classes::types {
    namespace AsyncRaycast {
        inline app::AsyncRaycast__Class** type_info = (app::AsyncRaycast__Class**)(modloader::win::memory::resolve_rva(0x04710058));
        inline app::AsyncRaycast__Class* get_class() {
            return il2cpp::get_class<app::AsyncRaycast__Class>(type_info, "", "AsyncRaycast");
        }
        inline app::AsyncRaycast* create() {
            return il2cpp::create_object<app::AsyncRaycast>(get_class());
        }
        inline app::AsyncRaycast__Array* create_array(int size) {
            return il2cpp::array_new<app::AsyncRaycast__Array>(get_class(), size);
        }
        inline app::AsyncRaycast__Array* create_array(const std::vector<app::AsyncRaycast*>& items) {
            return il2cpp::array_new<app::AsyncRaycast__Array>(get_class(), items);
        }
    } // namespace AsyncRaycast
} // namespace app::classes::types
