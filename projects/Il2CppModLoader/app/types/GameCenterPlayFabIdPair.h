#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameCenterPlayFabIdPair {
        namespace {
            app::GameCenterPlayFabIdPair__Class* type_info_ref = nullptr;
        }
        app::GameCenterPlayFabIdPair__Class** type_info = &type_info_ref;
        inline app::GameCenterPlayFabIdPair__Class* get_class() {
            return il2cpp::get_class<app::GameCenterPlayFabIdPair__Class>(type_info, "PlayFab.ClientModels", "GameCenterPlayFabIdPair");
        }
        inline app::GameCenterPlayFabIdPair* create() {
            return il2cpp::create_object<app::GameCenterPlayFabIdPair>(get_class());
        }
        inline app::GameCenterPlayFabIdPair__Array* create_array(int size) {
            return il2cpp::array_new<app::GameCenterPlayFabIdPair__Array>(get_class(), size);
        }
    } // namespace GameCenterPlayFabIdPair
} // namespace app::classes::types
