#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameControllerLate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameControllerLate__Class** type_info;
        inline app::GameControllerLate__Class* get_class() {
            return il2cpp::get_class<app::GameControllerLate__Class>(type_info, "", "GameControllerLate");
        }
        inline app::GameControllerLate* create() {
            return il2cpp::create_object<app::GameControllerLate>(get_class());
        }
    } // namespace GameControllerLate
} // namespace app::classes::types
