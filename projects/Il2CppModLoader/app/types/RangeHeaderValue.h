#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RangeHeaderValue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RangeHeaderValue__Class** type_info;
        inline app::RangeHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::RangeHeaderValue__Class>(type_info, "System.Net.Http.Headers", "RangeHeaderValue");
        }
        inline app::RangeHeaderValue* create() {
            return il2cpp::create_object<app::RangeHeaderValue>(get_class());
        }
    } // namespace RangeHeaderValue
} // namespace app::classes::types
