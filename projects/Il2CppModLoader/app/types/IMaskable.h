#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMaskable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMaskable__Class** type_info;
        inline app::IMaskable__Class* get_class() {
            return il2cpp::get_class<app::IMaskable__Class>(type_info, "UnityEngine.UI", "IMaskable");
        }
    } // namespace IMaskable
} // namespace app::classes::types
