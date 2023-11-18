#pragma once
#include <Modloader/app/structs/GameCenterPlayFabIdPair__Array.h>
#include <Modloader/app/structs/GameCenterPlayFabIdPair__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameCenterPlayFabIdPair__Array {
        inline app::GameCenterPlayFabIdPair__Array__Class** type_info() {
            static app::GameCenterPlayFabIdPair__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameCenterPlayFabIdPair__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameCenterPlayFabIdPair__Array__Class* get_class() {
            return il2cpp::get_class<app::GameCenterPlayFabIdPair__Array__Class>(type_info(), "PlayFab.ClientModels", "GameCenterPlayFabIdPair[]");
        }
        inline app::GameCenterPlayFabIdPair__Array* create() {
            return il2cpp::create_object<app::GameCenterPlayFabIdPair__Array>(get_class());
        }
    } // namespace GameCenterPlayFabIdPair__Array
} // namespace app::classes::types
