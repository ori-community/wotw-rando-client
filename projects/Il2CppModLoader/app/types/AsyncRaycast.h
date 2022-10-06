#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AsyncRaycast {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AsyncRaycast__Class** type_info;
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
