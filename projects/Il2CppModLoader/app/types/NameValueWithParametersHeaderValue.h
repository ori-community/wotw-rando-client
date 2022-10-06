#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NameValueWithParametersHeaderValue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NameValueWithParametersHeaderValue__Class** type_info;
        inline app::NameValueWithParametersHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::NameValueWithParametersHeaderValue__Class>(type_info, "System.Net.Http.Headers", "NameValueWithParametersHeaderValue");
        }
        inline app::NameValueWithParametersHeaderValue* create() {
            return il2cpp::create_object<app::NameValueWithParametersHeaderValue>(get_class());
        }
        inline app::NameValueWithParametersHeaderValue__Array* create_array(int size) {
            return il2cpp::array_new<app::NameValueWithParametersHeaderValue__Array>(get_class(), size);
        }
        inline app::NameValueWithParametersHeaderValue__Array* create_array(const std::vector<app::NameValueWithParametersHeaderValue*>& items) {
            return il2cpp::array_new<app::NameValueWithParametersHeaderValue__Array>(get_class(), items);
        }
    } // namespace NameValueWithParametersHeaderValue
} // namespace app::classes::types
