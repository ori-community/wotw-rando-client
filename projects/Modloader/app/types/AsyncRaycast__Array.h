#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AsyncRaycast__Array__Class.h>
#include <Modloader/app/structs/AsyncRaycast__Array.h>

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
