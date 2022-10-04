#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICloseEx {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ICloseEx__Class** type_info;
        inline app::ICloseEx__Class* get_class() {
            return il2cpp::get_class<app::ICloseEx__Class>(type_info, "System.Net", "ICloseEx");
        }
    } // namespace ICloseEx
} // namespace app::classes::types
