#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LobbyEnter_t__Class.h>
#include <Modloader/app/structs/LobbyEnter_t.h>
#include <Modloader/app/structs/LobbyEnter_t__Boxed.h>

namespace app::classes::types {
    namespace LobbyEnter_t {
        namespace {
            inline app::LobbyEnter_t__Class* type_info_ref = nullptr;
        }
        inline app::LobbyEnter_t__Class** type_info = &type_info_ref;
        inline app::LobbyEnter_t__Class* get_class() {
            return il2cpp::get_class<app::LobbyEnter_t__Class>(type_info, "Steamworks", "LobbyEnter_t");
        }
        inline app::LobbyEnter_t* create() {
            return il2cpp::create_object<app::LobbyEnter_t>(get_class());
        }
        inline app::LobbyEnter_t__Boxed* box(app::LobbyEnter_t value) {
            return il2cpp::box_value<app::LobbyEnter_t__Boxed>(get_class(), value);
        }
    } // namespace LobbyEnter_t
} // namespace app::classes::types
