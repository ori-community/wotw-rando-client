#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameCenterPlayFabIdPair__Array {
        namespace {
            app::GameCenterPlayFabIdPair__Array__Class* type_info_ref = nullptr;
        }
        app::GameCenterPlayFabIdPair__Array__Class** type_info = &type_info_ref;
        inline app::GameCenterPlayFabIdPair__Array__Class* get_class() {
            return il2cpp::get_class<app::GameCenterPlayFabIdPair__Array__Class>(type_info, "PlayFab.ClientModels", "GameCenterPlayFabIdPair[]");
        }
        inline app::GameCenterPlayFabIdPair__Array* create() {
            return il2cpp::create_object<app::GameCenterPlayFabIdPair__Array>(get_class());
        }
    } // namespace GameCenterPlayFabIdPair__Array
} // namespace app::classes::types
