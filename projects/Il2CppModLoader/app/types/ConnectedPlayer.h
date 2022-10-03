#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConnectedPlayer {
        namespace {
            app::ConnectedPlayer__Class* type_info_ref = nullptr;
        }
        app::ConnectedPlayer__Class** type_info = &type_info_ref;
        inline app::ConnectedPlayer__Class* get_class() {
            return il2cpp::get_class<app::ConnectedPlayer__Class>(type_info, "PlayFab.MultiplayerModels", "ConnectedPlayer");
        }
        inline app::ConnectedPlayer* create() {
            return il2cpp::create_object<app::ConnectedPlayer>(get_class());
        }
        inline app::ConnectedPlayer__Array* create_array(int size) {
            return il2cpp::array_new<app::ConnectedPlayer__Array>(get_class(), size);
        }
    } // namespace ConnectedPlayer
} // namespace app::classes::types
