#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteamItemInstanceID_t__Array {
        namespace {
            app::SteamItemInstanceID_t__Array__Class* type_info_ref = nullptr;
        }
        app::SteamItemInstanceID_t__Array__Class** type_info = &type_info_ref;
        inline app::SteamItemInstanceID_t__Array__Class* get_class() {
            return il2cpp::get_class<app::SteamItemInstanceID_t__Array__Class>(type_info, "Steamworks", "SteamItemInstanceID_t[]");
        }
        inline app::SteamItemInstanceID_t__Array* create() {
            return il2cpp::create_object<app::SteamItemInstanceID_t__Array>(get_class());
        }
    } // namespace SteamItemInstanceID_t__Array
} // namespace app::classes::types
