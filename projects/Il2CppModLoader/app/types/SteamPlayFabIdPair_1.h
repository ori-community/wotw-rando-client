#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteamPlayFabIdPair_1 {
        namespace {
            app::SteamPlayFabIdPair_1__Class* type_info_ref = nullptr;
        }
        app::SteamPlayFabIdPair_1__Class** type_info = &type_info_ref;
        inline app::SteamPlayFabIdPair_1__Class* get_class() {
            return il2cpp::get_class<app::SteamPlayFabIdPair_1__Class>(type_info, "PlayFab.ServerModels", "SteamPlayFabIdPair");
        }
        inline app::SteamPlayFabIdPair_1* create() {
            return il2cpp::create_object<app::SteamPlayFabIdPair_1>(get_class());
        }
        inline app::SteamPlayFabIdPair_1__Array* create_array(int size) {
            return il2cpp::array_new<app::SteamPlayFabIdPair_1__Array>(get_class(), size);
        }
    } // namespace SteamPlayFabIdPair_1
} // namespace app::classes::types
