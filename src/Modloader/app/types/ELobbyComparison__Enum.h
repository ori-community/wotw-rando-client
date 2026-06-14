#pragma once
#include <Modloader/app/structs/ELobbyComparison__Enum.h>
#include <Modloader/app/structs/ELobbyComparison__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ELobbyComparison__Enum {
        inline app::ELobbyComparison__Enum__Class** type_info() {
            static app::ELobbyComparison__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ELobbyComparison__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ELobbyComparison__Enum__Class* get_class() {
            return il2cpp::get_class<app::ELobbyComparison__Enum__Class>(type_info(), "Steamworks", "ELobbyComparison");
        }
        inline app::ELobbyComparison__Enum* create() {
            return il2cpp::create_object<app::ELobbyComparison__Enum>(get_class());
        }
    } // namespace ELobbyComparison__Enum
} // namespace app::classes::types
