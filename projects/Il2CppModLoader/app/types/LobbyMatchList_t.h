#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LobbyMatchList_t {
        namespace {
            inline app::LobbyMatchList_t__Class* type_info_ref = nullptr;
        }
        inline app::LobbyMatchList_t__Class** type_info = &type_info_ref;
        inline app::LobbyMatchList_t__Class* get_class() {
            return il2cpp::get_class<app::LobbyMatchList_t__Class>(type_info, "Steamworks", "LobbyMatchList_t");
        }
        inline app::LobbyMatchList_t* create() {
            return il2cpp::create_object<app::LobbyMatchList_t>(get_class());
        }
        inline app::LobbyMatchList_t__Boxed* box(app::LobbyMatchList_t value) {
            return il2cpp::box_value<app::LobbyMatchList_t__Boxed>(get_class(), value);
        }
    } // namespace LobbyMatchList_t
} // namespace app::classes::types
