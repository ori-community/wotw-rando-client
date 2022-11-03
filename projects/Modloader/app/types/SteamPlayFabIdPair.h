#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SteamPlayFabIdPair {
        namespace {
            inline app::SteamPlayFabIdPair__Class* type_info_ref = nullptr;
        }
        inline app::SteamPlayFabIdPair__Class** type_info = &type_info_ref;
        inline app::SteamPlayFabIdPair__Class* get_class() {
            return il2cpp::get_class<app::SteamPlayFabIdPair__Class>(type_info, "PlayFab.ClientModels", "SteamPlayFabIdPair");
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
