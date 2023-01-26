#pragma once
#include <Modloader/app/structs/ClaimsIdentity__Array.h>
#include <Modloader/app/structs/ClaimsIdentity__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClaimsIdentity__Array {
        inline app::ClaimsIdentity__Array__Class** type_info() {
            static app::ClaimsIdentity__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ClaimsIdentity__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ClaimsIdentity__Array__Class* get_class() {
            return il2cpp::get_class<app::ClaimsIdentity__Array__Class>(type_info(), "System.Security.Claims", "ClaimsIdentity[]");
        }
        inline app::ClaimsIdentity__Array* create() {
            return il2cpp::create_object<app::ClaimsIdentity__Array>(get_class());
        }
    } // namespace ClaimsIdentity__Array
} // namespace app::classes::types
