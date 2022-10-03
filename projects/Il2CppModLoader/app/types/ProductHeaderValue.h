#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProductHeaderValue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ProductHeaderValue__Class** type_info;
        inline app::ProductHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::ProductHeaderValue__Class>(type_info, "System.Net.Http.Headers", "ProductHeaderValue");
        }
        inline app::ProductHeaderValue* create() {
            return il2cpp::create_object<app::ProductHeaderValue>(get_class());
        }
        inline app::ProductHeaderValue__Array* create_array(int size) {
            return il2cpp::array_new<app::ProductHeaderValue__Array>(get_class(), size);
        }
    } // namespace ProductHeaderValue
} // namespace app::classes::types
