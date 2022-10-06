#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NameValueHeaderValue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NameValueHeaderValue__Class** type_info;
        inline app::NameValueHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::NameValueHeaderValue__Class>(type_info, "System.Net.Http.Headers", "NameValueHeaderValue");
        }
        inline app::NameValueHeaderValue* create() {
            return il2cpp::create_object<app::NameValueHeaderValue>(get_class());
        }
        inline app::NameValueHeaderValue__Array* create_array(int size) {
            return il2cpp::array_new<app::NameValueHeaderValue__Array>(get_class(), size);
        }
        inline app::NameValueHeaderValue__Array* create_array(const std::vector<app::NameValueHeaderValue*>& items) {
            return il2cpp::array_new<app::NameValueHeaderValue__Array>(get_class(), items);
        }
    } // namespace NameValueHeaderValue
} // namespace app::classes::types
