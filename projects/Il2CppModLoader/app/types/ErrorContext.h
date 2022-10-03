#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ErrorContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ErrorContext__Class** type_info;
        inline app::ErrorContext__Class* get_class() {
            return il2cpp::get_class<app::ErrorContext__Class>(type_info, "Newtonsoft.Json.Serialization", "ErrorContext");
        }
        inline app::ErrorContext* create() {
            return il2cpp::create_object<app::ErrorContext>(get_class());
        }
    } // namespace ErrorContext
} // namespace app::classes::types
