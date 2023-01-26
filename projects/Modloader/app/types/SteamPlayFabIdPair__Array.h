#pragma once
#include <Modloader/app/structs/SteamPlayFabIdPair__Array.h>
#include <Modloader/app/structs/SteamPlayFabIdPair__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteamPlayFabIdPair__Array {
        inline app::SteamPlayFabIdPair__Array__Class** type_info() {
            static app::SteamPlayFabIdPair__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SteamPlayFabIdPair__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SteamPlayFabIdPair__Array__Class* get_class() {
            return il2cpp::get_class<app::SteamPlayFabIdPair__Array__Class>(type_info(), "PlayFab.ClientModels", "SteamPlayFabIdPair[]");
        }
        inline app::SteamPlayFabIdPair__Array* create() {
            return il2cpp::create_object<app::SteamPlayFabIdPair__Array>(get_class());
        }
    } // namespace SteamPlayFabIdPair__Array
} // namespace app::classes::types
