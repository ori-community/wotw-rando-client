#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AsyncRaycast__Array {
        namespace {
            inline app::AsyncRaycast__Array__Class* type_info_ref = nullptr;
        }
        inline app::AsyncRaycast__Array__Class** type_info = &type_info_ref;
        inline app::AsyncRaycast__Array__Class* get_class() {
            return il2cpp::get_class<app::AsyncRaycast__Array__Class>(type_info, "", "AsyncRaycast[]");
        }
        inline app::AsyncRaycast__Array* create() {
            return il2cpp::create_object<app::AsyncRaycast__Array>(get_class());
        }
    } // namespace AsyncRaycast__Array
} // namespace app::classes::types
