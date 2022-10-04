#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IBubbleKiller {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IBubbleKiller__Class** type_info;
        inline app::IBubbleKiller__Class* get_class() {
            return il2cpp::get_class<app::IBubbleKiller__Class>(type_info, "", "IBubbleKiller");
        }
    } // namespace IBubbleKiller
} // namespace app::classes::types
