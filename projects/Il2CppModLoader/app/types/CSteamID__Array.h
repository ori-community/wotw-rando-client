#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CSteamID__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CSteamID__Array__Class** type_info;
        inline app::CSteamID__Array__Class* get_class() {
            return il2cpp::get_class<app::CSteamID__Array__Class>(type_info, "Steamworks", "CSteamID[]");
        }
        inline app::CSteamID__Array* create() {
            return il2cpp::create_object<app::CSteamID__Array>(get_class());
        }
    } // namespace CSteamID__Array
} // namespace app::classes::types
