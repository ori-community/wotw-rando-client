#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IRequestCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IRequestCallback__Class** type_info;
        inline app::IRequestCallback__Class* get_class() {
            return il2cpp::get_class<app::IRequestCallback__Class>(type_info, "Moon.Network.Web", "IRequestCallback");
        }
    } // namespace IRequestCallback
} // namespace app::classes::types
