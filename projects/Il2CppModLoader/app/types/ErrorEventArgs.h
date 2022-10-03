#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ErrorEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ErrorEventArgs__Class** type_info;
        inline app::ErrorEventArgs__Class* get_class() {
            return il2cpp::get_class<app::ErrorEventArgs__Class>(type_info, "Newtonsoft.Json.Serialization", "ErrorEventArgs");
        }
        inline app::ErrorEventArgs* create() {
            return il2cpp::create_object<app::ErrorEventArgs>(get_class());
        }
    } // namespace ErrorEventArgs
} // namespace app::classes::types
