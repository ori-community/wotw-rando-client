#pragma once
#include <Modloader/app/structs/NameValueHeaderValue__Array.h>
#include <Modloader/app/structs/NameValueHeaderValue__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NameValueHeaderValue__Array {
        inline app::NameValueHeaderValue__Array__Class** type_info() {
            static app::NameValueHeaderValue__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NameValueHeaderValue__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NameValueHeaderValue__Array__Class* get_class() {
            return il2cpp::get_class<app::NameValueHeaderValue__Array__Class>(type_info(), "System.Net.Http.Headers", "NameValueHeaderValue[]");
        }
        inline app::NameValueHeaderValue__Array* create() {
            return il2cpp::create_object<app::NameValueHeaderValue__Array>(get_class());
        }
    } // namespace NameValueHeaderValue__Array
} // namespace app::classes::types
