#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EMatchMakingServerResponse__Enum {
        inline app::EMatchMakingServerResponse__Enum__Class** type_info = (app::EMatchMakingServerResponse__Enum__Class**)(modloader::win::memory::resolve_rva(0x04753270));
        inline app::EMatchMakingServerResponse__Enum__Class* get_class() {
            return il2cpp::get_class<app::EMatchMakingServerResponse__Enum__Class>(type_info, "Steamworks", "EMatchMakingServerResponse");
        }
        inline app::EMatchMakingServerResponse__Enum* create() {
            return il2cpp::create_object<app::EMatchMakingServerResponse__Enum>(get_class());
        }
    } // namespace EMatchMakingServerResponse__Enum
} // namespace app::classes::types
