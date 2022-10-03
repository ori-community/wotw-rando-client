#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RaceSystem__Class** type_info;
        inline app::RaceSystem__Class* get_class() {
            return il2cpp::get_class<app::RaceSystem__Class>(type_info, "", "RaceSystem");
        }
        inline app::RaceSystem* create() {
            return il2cpp::create_object<app::RaceSystem>(get_class());
        }
    } // namespace RaceSystem
} // namespace app::classes::types
