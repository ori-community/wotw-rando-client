#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NameValueWithParametersHeaderValue__Array {
        namespace {
            app::NameValueWithParametersHeaderValue__Array__Class* type_info_ref = nullptr;
        }
        app::NameValueWithParametersHeaderValue__Array__Class** type_info = &type_info_ref;
        inline app::NameValueWithParametersHeaderValue__Array__Class* get_class() {
            return il2cpp::get_class<app::NameValueWithParametersHeaderValue__Array__Class>(type_info, "System.Net.Http.Headers", "NameValueWithParametersHeaderValue[]");
        }
        inline app::NameValueWithParametersHeaderValue__Array* create() {
            return il2cpp::create_object<app::NameValueWithParametersHeaderValue__Array>(get_class());
        }
    } // namespace NameValueWithParametersHeaderValue__Array
} // namespace app::classes::types
