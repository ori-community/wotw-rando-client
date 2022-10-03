#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InteropHelp_SteamParamStringArray {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InteropHelp_SteamParamStringArray__Class** type_info;
        inline app::InteropHelp_SteamParamStringArray__Class* get_class() {
            return il2cpp::get_nested_class<app::InteropHelp_SteamParamStringArray__Class>(type_info, "Steamworks", "InteropHelp", "SteamParamStringArray");
        }
        inline app::InteropHelp_SteamParamStringArray* create() {
            return il2cpp::create_object<app::InteropHelp_SteamParamStringArray>(get_class());
        }
    } // namespace InteropHelp_SteamParamStringArray
} // namespace app::classes::types
