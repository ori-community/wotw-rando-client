#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteamPlayFabIdPair {
        namespace {
            app::SteamPlayFabIdPair__Class* type_info_ref = nullptr;
        }
        app::SteamPlayFabIdPair__Class** type_info = &type_info_ref;
        inline app::SteamPlayFabIdPair__Class* get_class() {
            return il2cpp::get_class<app::SteamPlayFabIdPair__Class>(type_info, "PlayFab.ClientModels", "SteamPlayFabIdPair");
        }
        inline app::SteamPlayFabIdPair* create() {
            return il2cpp::create_object<app::SteamPlayFabIdPair>(get_class());
        }
        inline app::SteamPlayFabIdPair__Array* create_array(int size) {
            return il2cpp::array_new<app::SteamPlayFabIdPair__Array>(get_class(), size);
        }
    } // namespace SteamPlayFabIdPair
} // namespace app::classes::types
