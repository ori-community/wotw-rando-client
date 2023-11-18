#pragma once
#include <Modloader/app/structs/AuthenticationHeaderValue__Array.h>
#include <Modloader/app/structs/AuthenticationHeaderValue__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AuthenticationHeaderValue__Array {
        inline app::AuthenticationHeaderValue__Array__Class** type_info() {
            static app::AuthenticationHeaderValue__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AuthenticationHeaderValue__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AuthenticationHeaderValue__Array__Class* get_class() {
            return il2cpp::get_class<app::AuthenticationHeaderValue__Array__Class>(type_info(), "System.Net.Http.Headers", "AuthenticationHeaderValue[]");
        }
        inline app::AuthenticationHeaderValue__Array* create() {
            return il2cpp::create_object<app::AuthenticationHeaderValue__Array>(get_class());
        }
    } // namespace AuthenticationHeaderValue__Array
} // namespace app::classes::types
