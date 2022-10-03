#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NameValueHeaderValue__Array {
        namespace {
            app::NameValueHeaderValue__Array__Class* type_info_ref = nullptr;
        }
        app::NameValueHeaderValue__Array__Class** type_info = &type_info_ref;
        inline app::NameValueHeaderValue__Array__Class* get_class() {
            return il2cpp::get_class<app::NameValueHeaderValue__Array__Class>(type_info, "System.Net.Http.Headers", "NameValueHeaderValue[]");
        }
        inline app::NameValueHeaderValue__Array* create() {
            return il2cpp::create_object<app::NameValueHeaderValue__Array>(get_class());
        }
    } // namespace NameValueHeaderValue__Array
} // namespace app::classes::types
