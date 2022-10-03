#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HSteamPipe {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HSteamPipe__Class** type_info;
        inline app::HSteamPipe__Class* get_class() {
            return il2cpp::get_class<app::HSteamPipe__Class>(type_info, "Steamworks", "HSteamPipe");
        }
        inline app::HSteamPipe* create() {
            return il2cpp::create_object<app::HSteamPipe>(get_class());
        }
        inline app::HSteamPipe__Boxed* box(app::HSteamPipe value) {
            return il2cpp::box_value<app::HSteamPipe__Boxed>(get_class(), value);
        }
    } // namespace HSteamPipe
} // namespace app::classes::types
