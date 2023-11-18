#pragma once
#include <Modloader/app/structs/ConnectedPlayer.h>
#include <Modloader/app/structs/ConnectedPlayer__Array.h>
#include <Modloader/app/structs/ConnectedPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConnectedPlayer {
        inline app::ConnectedPlayer__Class** type_info() {
            static app::ConnectedPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConnectedPlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConnectedPlayer__Class* get_class() {
            return il2cpp::get_class<app::ConnectedPlayer__Class>(type_info(), "PlayFab.MultiplayerModels", "ConnectedPlayer");
        }
        inline app::ConnectedPlayer* create() {
            return il2cpp::create_object<app::ConnectedPlayer>(get_class());
        }
        inline app::ConnectedPlayer__Array* create_array(int size) {
            return il2cpp::array_new<app::ConnectedPlayer__Array>(get_class(), size);
        }
        inline app::ConnectedPlayer__Array* create_array(const std::vector<app::ConnectedPlayer*>& items) {
            return il2cpp::array_new<app::ConnectedPlayer__Array>(get_class(), items);
        }
    } // namespace ConnectedPlayer
} // namespace app::classes::types
