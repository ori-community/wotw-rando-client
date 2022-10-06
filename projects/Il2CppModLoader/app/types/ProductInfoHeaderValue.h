#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProductInfoHeaderValue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ProductInfoHeaderValue__Class** type_info;
        inline app::ProductInfoHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::ProductInfoHeaderValue__Class>(type_info, "System.Net.Http.Headers", "ProductInfoHeaderValue");
        }
        inline app::ProductInfoHeaderValue* create() {
            return il2cpp::create_object<app::ProductInfoHeaderValue>(get_class());
        }
        inline app::ProductInfoHeaderValue__Array* create_array(int size) {
            return il2cpp::array_new<app::ProductInfoHeaderValue__Array>(get_class(), size);
        }
        inline app::ProductInfoHeaderValue__Array* create_array(const std::vector<app::ProductInfoHeaderValue*>& items) {
            return il2cpp::array_new<app::ProductInfoHeaderValue__Array>(get_class(), items);
        }
    } // namespace ProductInfoHeaderValue
} // namespace app::classes::types
