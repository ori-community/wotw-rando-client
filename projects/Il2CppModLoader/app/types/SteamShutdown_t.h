#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SteamShutdown_t {
        namespace {
            inline app::SteamShutdown_t__Class* type_info_ref = nullptr;
        }
        inline app::SteamShutdown_t__Class** type_info = &type_info_ref;
        inline app::SteamShutdown_t__Class* get_class() {
            return il2cpp::get_class<app::SteamShutdown_t__Class>(type_info, "Steamworks", "SteamShutdown_t");
        }
        inline app::SteamShutdown_t* create() {
            return il2cpp::create_object<app::SteamShutdown_t>(get_class());
        }
        inline app::SteamShutdown_t__Boxed* box(app::SteamShutdown_t value) {
            return il2cpp::box_value<app::SteamShutdown_t__Boxed>(get_class(), value);
        }
    } // namespace SteamShutdown_t
} // namespace app::classes::types
