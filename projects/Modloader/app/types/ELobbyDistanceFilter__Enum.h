#pragma once
#include <Modloader/app/structs/ELobbyDistanceFilter__Enum.h>
#include <Modloader/app/structs/ELobbyDistanceFilter__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ELobbyDistanceFilter__Enum {
        inline app::ELobbyDistanceFilter__Enum__Class** type_info() {
            static app::ELobbyDistanceFilter__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ELobbyDistanceFilter__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ELobbyDistanceFilter__Enum__Class* get_class() {
            return il2cpp::get_class<app::ELobbyDistanceFilter__Enum__Class>(type_info(), "Steamworks", "ELobbyDistanceFilter");
        }
        inline app::ELobbyDistanceFilter__Enum* create() {
            return il2cpp::create_object<app::ELobbyDistanceFilter__Enum>(get_class());
        }
    } // namespace ELobbyDistanceFilter__Enum
} // namespace app::classes::types
