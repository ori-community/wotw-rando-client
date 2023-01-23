#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ELobbyType__Enum__Class.h>
#include <Modloader/app/structs/ELobbyType__Enum.h>

namespace app::classes::types {
    namespace ELobbyType__Enum {
        namespace {
            inline app::ELobbyType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ELobbyType__Enum__Class** type_info = &type_info_ref;
        inline app::ELobbyType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ELobbyType__Enum__Class>(type_info, "Steamworks", "ELobbyType");
        }
        inline app::ELobbyType__Enum* create() {
            return il2cpp::create_object<app::ELobbyType__Enum>(get_class());
        }
    } // namespace ELobbyType__Enum
} // namespace app::classes::types
