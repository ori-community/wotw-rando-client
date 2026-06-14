#pragma once
#include <Modloader/app/structs/SteamPlayFabIdPair.h>
#include <Modloader/app/structs/SteamPlayFabIdPair__Array.h>
#include <Modloader/app/structs/SteamPlayFabIdPair__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteamPlayFabIdPair {
        inline app::SteamPlayFabIdPair__Class** type_info() {
            static app::SteamPlayFabIdPair__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SteamPlayFabIdPair__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SteamPlayFabIdPair__Class* get_class() {
            return il2cpp::get_class<app::SteamPlayFabIdPair__Class>(type_info(), "PlayFab.ClientModels", "SteamPlayFabIdPair");
        }
        inline app::SteamPlayFabIdPair* create() {
            return il2cpp::create_object<app::SteamPlayFabIdPair>(get_class());
        }
        inline app::SteamPlayFabIdPair__Array* create_array(int size) {
            return il2cpp::array_new<app::SteamPlayFabIdPair__Array>(get_class(), size);
        }
        inline app::SteamPlayFabIdPair__Array* create_array(const std::vector<app::SteamPlayFabIdPair*>& items) {
            return il2cpp::array_new<app::SteamPlayFabIdPair__Array>(get_class(), items);
        }
    } // namespace SteamPlayFabIdPair
} // namespace app::classes::types
