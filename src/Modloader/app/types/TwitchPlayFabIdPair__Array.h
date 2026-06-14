#pragma once
#include <Modloader/app/structs/TwitchPlayFabIdPair__Array.h>
#include <Modloader/app/structs/TwitchPlayFabIdPair__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TwitchPlayFabIdPair__Array {
        inline app::TwitchPlayFabIdPair__Array__Class** type_info() {
            static app::TwitchPlayFabIdPair__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TwitchPlayFabIdPair__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TwitchPlayFabIdPair__Array__Class* get_class() {
            return il2cpp::get_class<app::TwitchPlayFabIdPair__Array__Class>(type_info(), "PlayFab.ClientModels", "TwitchPlayFabIdPair[]");
        }
        inline app::TwitchPlayFabIdPair__Array* create() {
            return il2cpp::create_object<app::TwitchPlayFabIdPair__Array>(get_class());
        }
    } // namespace TwitchPlayFabIdPair__Array
} // namespace app::classes::types
