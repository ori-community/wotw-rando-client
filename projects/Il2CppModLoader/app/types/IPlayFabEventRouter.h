#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPlayFabEventRouter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPlayFabEventRouter__Class** type_info;
        inline app::IPlayFabEventRouter__Class* get_class() {
            return il2cpp::get_class<app::IPlayFabEventRouter__Class>(type_info, "PlayFab", "IPlayFabEventRouter");
        }
        inline app::IPlayFabEventRouter* create() {
            return il2cpp::create_object<app::IPlayFabEventRouter>(get_class());
        }
    } // namespace IPlayFabEventRouter
} // namespace app::classes::types
