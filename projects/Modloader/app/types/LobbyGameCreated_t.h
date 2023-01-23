#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LobbyGameCreated_t__Class.h>
#include <Modloader/app/structs/LobbyGameCreated_t.h>
#include <Modloader/app/structs/LobbyGameCreated_t__Boxed.h>

namespace app::classes::types {
    namespace LobbyGameCreated_t {
        namespace {
            inline app::LobbyGameCreated_t__Class* type_info_ref = nullptr;
        }
        inline app::LobbyGameCreated_t__Class** type_info = &type_info_ref;
        inline app::LobbyGameCreated_t__Class* get_class() {
            return il2cpp::get_class<app::LobbyGameCreated_t__Class>(type_info, "Steamworks", "LobbyGameCreated_t");
        }
        inline app::LobbyGameCreated_t* create() {
            return il2cpp::create_object<app::LobbyGameCreated_t>(get_class());
        }
        inline app::LobbyGameCreated_t__Boxed* box(app::LobbyGameCreated_t value) {
            return il2cpp::box_value<app::LobbyGameCreated_t__Boxed>(get_class(), value);
        }
    } // namespace LobbyGameCreated_t
} // namespace app::classes::types
