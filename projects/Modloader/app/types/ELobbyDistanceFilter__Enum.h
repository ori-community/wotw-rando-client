#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ELobbyDistanceFilter__Enum__Class.h>
#include <Modloader/app/structs/ELobbyDistanceFilter__Enum.h>

namespace app::classes::types {
    namespace ELobbyDistanceFilter__Enum {
        namespace {
            inline app::ELobbyDistanceFilter__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ELobbyDistanceFilter__Enum__Class** type_info = &type_info_ref;
        inline app::ELobbyDistanceFilter__Enum__Class* get_class() {
            return il2cpp::get_class<app::ELobbyDistanceFilter__Enum__Class>(type_info, "Steamworks", "ELobbyDistanceFilter");
        }
        inline app::ELobbyDistanceFilter__Enum* create() {
            return il2cpp::create_object<app::ELobbyDistanceFilter__Enum>(get_class());
        }
    } // namespace ELobbyDistanceFilter__Enum
} // namespace app::classes::types
