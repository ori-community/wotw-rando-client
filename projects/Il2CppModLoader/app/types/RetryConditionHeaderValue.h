#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RetryConditionHeaderValue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RetryConditionHeaderValue__Class** type_info;
        inline app::RetryConditionHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::RetryConditionHeaderValue__Class>(type_info, "System.Net.Http.Headers", "RetryConditionHeaderValue");
        }
        inline app::RetryConditionHeaderValue* create() {
            return il2cpp::create_object<app::RetryConditionHeaderValue>(get_class());
        }
    } // namespace RetryConditionHeaderValue
} // namespace app::classes::types
