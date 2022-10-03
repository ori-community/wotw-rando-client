#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RangeConditionHeaderValue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RangeConditionHeaderValue__Class** type_info;
        inline app::RangeConditionHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::RangeConditionHeaderValue__Class>(type_info, "System.Net.Http.Headers", "RangeConditionHeaderValue");
        }
        inline app::RangeConditionHeaderValue* create() {
            return il2cpp::create_object<app::RangeConditionHeaderValue>(get_class());
        }
    } // namespace RangeConditionHeaderValue
} // namespace app::classes::types
