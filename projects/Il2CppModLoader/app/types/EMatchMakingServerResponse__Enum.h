#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EMatchMakingServerResponse__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EMatchMakingServerResponse__Enum__Class** type_info;
        inline app::EMatchMakingServerResponse__Enum__Class* get_class() {
            return il2cpp::get_class<app::EMatchMakingServerResponse__Enum__Class>(type_info, "Steamworks", "EMatchMakingServerResponse");
        }
        inline app::EMatchMakingServerResponse__Enum* create() {
            return il2cpp::create_object<app::EMatchMakingServerResponse__Enum>(get_class());
        }
    } // namespace EMatchMakingServerResponse__Enum
} // namespace app::classes::types
