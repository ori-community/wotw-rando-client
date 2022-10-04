#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKillReciever {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IKillReciever__Class** type_info;
        inline app::IKillReciever__Class* get_class() {
            return il2cpp::get_class<app::IKillReciever__Class>(type_info, "", "IKillReciever");
        }
    } // namespace IKillReciever
} // namespace app::classes::types
