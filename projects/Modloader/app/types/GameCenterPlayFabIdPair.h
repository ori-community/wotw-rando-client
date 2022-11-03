#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameCenterPlayFabIdPair {
        namespace {
            inline app::GameCenterPlayFabIdPair__Class* type_info_ref = nullptr;
        }
        inline app::GameCenterPlayFabIdPair__Class** type_info = &type_info_ref;
        inline app::GameCenterPlayFabIdPair__Class* get_class() {
            return il2cpp::get_class<app::GameCenterPlayFabIdPair__Class>(type_info, "PlayFab.ClientModels", "GameCenterPlayFabIdPair");
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
