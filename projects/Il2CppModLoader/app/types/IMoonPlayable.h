#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMoonPlayable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMoonPlayable__Class** type_info;
        inline app::IMoonPlayable__Class* get_class() {
            return il2cpp::get_class<app::IMoonPlayable__Class>(type_info, "Moon.Timeline", "IMoonPlayable");
        }
    } // namespace IMoonPlayable
} // namespace app::classes::types
