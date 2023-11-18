#pragma once
#include <Modloader/app/structs/AsyncRaycast__Array.h>
#include <Modloader/app/structs/AsyncRaycast__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsyncRaycast__Array {
        inline app::AsyncRaycast__Array__Class** type_info() {
            static app::AsyncRaycast__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AsyncRaycast__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AsyncRaycast__Array__Class* get_class() {
            return il2cpp::get_class<app::AsyncRaycast__Array__Class>(type_info(), "", "AsyncRaycast[]");
        }
        inline app::AsyncRaycast__Array* create() {
            return il2cpp::create_object<app::AsyncRaycast__Array>(get_class());
        }
    } // namespace AsyncRaycast__Array
} // namespace app::classes::types
