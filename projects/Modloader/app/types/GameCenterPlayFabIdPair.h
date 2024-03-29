#pragma once
#include <Modloader/app/structs/GameCenterPlayFabIdPair.h>
#include <Modloader/app/structs/GameCenterPlayFabIdPair__Array.h>
#include <Modloader/app/structs/GameCenterPlayFabIdPair__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameCenterPlayFabIdPair {
        inline app::GameCenterPlayFabIdPair__Class** type_info() {
            static app::GameCenterPlayFabIdPair__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameCenterPlayFabIdPair__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameCenterPlayFabIdPair__Class* get_class() {
            return il2cpp::get_class<app::GameCenterPlayFabIdPair__Class>(type_info(), "PlayFab.ClientModels", "GameCenterPlayFabIdPair");
        }
        inline app::GameCenterPlayFabIdPair* create() {
            return il2cpp::create_object<app::GameCenterPlayFabIdPair>(get_class());
        }
        inline app::GameCenterPlayFabIdPair__Array* create_array(int size) {
            return il2cpp::array_new<app::GameCenterPlayFabIdPair__Array>(get_class(), size);
        }
        inline app::GameCenterPlayFabIdPair__Array* create_array(const std::vector<app::GameCenterPlayFabIdPair*>& items) {
            return il2cpp::array_new<app::GameCenterPlayFabIdPair__Array>(get_class(), items);
        }
    } // namespace GameCenterPlayFabIdPair
} // namespace app::classes::types
