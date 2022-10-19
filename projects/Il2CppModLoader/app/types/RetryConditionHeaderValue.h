#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RetryConditionHeaderValue {
        inline app::RetryConditionHeaderValue__Class** type_info = (app::RetryConditionHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x0470B548));
        inline app::RetryConditionHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::RetryConditionHeaderValue__Class>(type_info, "System.Net.Http.Headers", "RetryConditionHeaderValue");
        }
        inline app::RetryConditionHeaderValue* create() {
            return il2cpp::create_object<app::RetryConditionHeaderValue>(get_class());
        }
    } // namespace RetryConditionHeaderValue
} // namespace app::classes::types
