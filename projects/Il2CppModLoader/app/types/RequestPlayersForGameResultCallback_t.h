#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RequestPlayersForGameResultCallback_t {
        namespace {
            inline app::RequestPlayersForGameResultCallback_t__Class* type_info_ref = nullptr;
        }
        inline app::RequestPlayersForGameResultCallback_t__Class** type_info = &type_info_ref;
        inline app::RequestPlayersForGameResultCallback_t__Class* get_class() {
            return il2cpp::get_class<app::RequestPlayersForGameResultCallback_t__Class>(type_info, "Steamworks", "RequestPlayersForGameResultCallback_t");
        }
        inline app::RequestPlayersForGameResultCallback_t* create() {
            return il2cpp::create_object<app::RequestPlayersForGameResultCallback_t>(get_class());
        }
        inline app::RequestPlayersForGameResultCallback_t__Boxed* box(app::RequestPlayersForGameResultCallback_t value) {
            return il2cpp::box_value<app::RequestPlayersForGameResultCallback_t__Boxed>(get_class(), value);
        }
    } // namespace RequestPlayersForGameResultCallback_t
} // namespace app::classes::types
