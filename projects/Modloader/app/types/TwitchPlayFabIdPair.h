#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TwitchPlayFabIdPair {
        namespace {
            inline app::TwitchPlayFabIdPair__Class* type_info_ref = nullptr;
        }
        inline app::TwitchPlayFabIdPair__Class** type_info = &type_info_ref;
        inline app::TwitchPlayFabIdPair__Class* get_class() {
            return il2cpp::get_class<app::TwitchPlayFabIdPair__Class>(type_info, "PlayFab.ClientModels", "TwitchPlayFabIdPair");
        }
        inline app::TwitchPlayFabIdPair* create() {
            return il2cpp::create_object<app::TwitchPlayFabIdPair>(get_class());
        }
        inline app::TwitchPlayFabIdPair__Array* create_array(int size) {
            return il2cpp::array_new<app::TwitchPlayFabIdPair__Array>(get_class(), size);
        }
        inline app::TwitchPlayFabIdPair__Array* create_array(const std::vector<app::TwitchPlayFabIdPair*>& items) {
            return il2cpp::array_new<app::TwitchPlayFabIdPair__Array>(get_class(), items);
        }
    } // namespace TwitchPlayFabIdPair
} // namespace app::classes::types
