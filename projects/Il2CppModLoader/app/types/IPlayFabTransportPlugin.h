#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPlayFabTransportPlugin {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPlayFabTransportPlugin__Class** type_info;
        inline app::IPlayFabTransportPlugin__Class* get_class() {
            return il2cpp::get_class<app::IPlayFabTransportPlugin__Class>(type_info, "PlayFab", "IPlayFabTransportPlugin");
        }
        inline app::IPlayFabTransportPlugin* create() {
            return il2cpp::create_object<app::IPlayFabTransportPlugin>(get_class());
        }
    } // namespace IPlayFabTransportPlugin
} // namespace app::classes::types
