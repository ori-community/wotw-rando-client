#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ILogger_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ILogger_1__Class** type_info;
        inline app::ILogger_1__Class* get_class() {
            return il2cpp::get_class<app::ILogger_1__Class>(type_info, "PlayFab.Logger", "ILogger");
        }
        inline app::ILogger_1* create() {
            return il2cpp::create_object<app::ILogger_1>(get_class());
        }
    } // namespace ILogger_1
} // namespace app::classes::types
