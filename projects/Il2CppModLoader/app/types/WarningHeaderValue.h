#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WarningHeaderValue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WarningHeaderValue__Class** type_info;
        inline app::WarningHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::WarningHeaderValue__Class>(type_info, "System.Net.Http.Headers", "WarningHeaderValue");
        }
        inline app::WarningHeaderValue* create() {
            return il2cpp::create_object<app::WarningHeaderValue>(get_class());
        }
        inline app::WarningHeaderValue__Array* create_array(int size) {
            return il2cpp::array_new<app::WarningHeaderValue__Array>(get_class(), size);
        }
    } // namespace WarningHeaderValue
} // namespace app::classes::types
