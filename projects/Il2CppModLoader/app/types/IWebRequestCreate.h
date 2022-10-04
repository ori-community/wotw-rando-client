#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IWebRequestCreate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IWebRequestCreate__Class** type_info;
        inline app::IWebRequestCreate__Class* get_class() {
            return il2cpp::get_class<app::IWebRequestCreate__Class>(type_info, "System.Net", "IWebRequestCreate");
        }
    } // namespace IWebRequestCreate
} // namespace app::classes::types
