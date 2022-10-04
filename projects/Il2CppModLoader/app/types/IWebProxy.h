#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IWebProxy {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IWebProxy__Class** type_info;
        inline app::IWebProxy__Class* get_class() {
            return il2cpp::get_class<app::IWebProxy__Class>(type_info, "System.Net", "IWebProxy");
        }
        inline app::IWebProxy* create() {
            return il2cpp::create_object<app::IWebProxy>(get_class());
        }
    } // namespace IWebProxy
} // namespace app::classes::types
