#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IRespawnReciever {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IRespawnReciever__Class** type_info;
        inline app::IRespawnReciever__Class* get_class() {
            return il2cpp::get_class<app::IRespawnReciever__Class>(type_info, "", "IRespawnReciever");
        }
    } // namespace IRespawnReciever
} // namespace app::classes::types
