#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RequestPlayersForGameProgressCallback_t {
        namespace {
            app::RequestPlayersForGameProgressCallback_t__Class* type_info_ref = nullptr;
        }
        app::RequestPlayersForGameProgressCallback_t__Class** type_info = &type_info_ref;
        inline app::RequestPlayersForGameProgressCallback_t__Class* get_class() {
            return il2cpp::get_class<app::RequestPlayersForGameProgressCallback_t__Class>(type_info, "Steamworks", "RequestPlayersForGameProgressCallback_t");
        }
        inline app::RequestPlayersForGameProgressCallback_t* create() {
            return il2cpp::create_object<app::RequestPlayersForGameProgressCallback_t>(get_class());
        }
        inline app::RequestPlayersForGameProgressCallback_t__Boxed* box(app::RequestPlayersForGameProgressCallback_t value) {
            return il2cpp::box_value<app::RequestPlayersForGameProgressCallback_t__Boxed>(get_class(), value);
        }
    } // namespace RequestPlayersForGameProgressCallback_t
} // namespace app::classes::types
