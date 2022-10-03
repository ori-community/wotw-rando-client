#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ELobbyDistanceFilter__Enum {
        namespace {
            app::ELobbyDistanceFilter__Enum__Class* type_info_ref = nullptr;
        }
        app::ELobbyDistanceFilter__Enum__Class** type_info = &type_info_ref;
        inline app::ELobbyDistanceFilter__Enum__Class* get_class() {
            return il2cpp::get_class<app::ELobbyDistanceFilter__Enum__Class>(type_info, "Steamworks", "ELobbyDistanceFilter");
        }
        inline app::ELobbyDistanceFilter__Enum* create() {
            return il2cpp::create_object<app::ELobbyDistanceFilter__Enum>(get_class());
        }
    } // namespace ELobbyDistanceFilter__Enum
} // namespace app::classes::types
