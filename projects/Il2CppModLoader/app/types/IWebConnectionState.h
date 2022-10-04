#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IWebConnectionState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IWebConnectionState__Class** type_info;
        inline app::IWebConnectionState__Class* get_class() {
            return il2cpp::get_class<app::IWebConnectionState__Class>(type_info, "System.Net", "IWebConnectionState");
        }
        inline app::IWebConnectionState* create() {
            return il2cpp::create_object<app::IWebConnectionState>(get_class());
        }
    } // namespace IWebConnectionState
} // namespace app::classes::types
