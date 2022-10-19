#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerCustomIDPlayFabIDPair {
        namespace {
            inline app::ServerCustomIDPlayFabIDPair__Class* type_info_ref = nullptr;
        }
        inline app::ServerCustomIDPlayFabIDPair__Class** type_info = &type_info_ref;
        inline app::ServerCustomIDPlayFabIDPair__Class* get_class() {
            return il2cpp::get_class<app::ServerCustomIDPlayFabIDPair__Class>(type_info, "PlayFab.ServerModels", "ServerCustomIDPlayFabIDPair");
        }
        inline app::ServerCustomIDPlayFabIDPair* create() {
            return il2cpp::create_object<app::ServerCustomIDPlayFabIDPair>(get_class());
        }
        inline app::ServerCustomIDPlayFabIDPair__Array* create_array(int size) {
            return il2cpp::array_new<app::ServerCustomIDPlayFabIDPair__Array>(get_class(), size);
        }
        inline app::ServerCustomIDPlayFabIDPair__Array* create_array(const std::vector<app::ServerCustomIDPlayFabIDPair*>& items) {
            return il2cpp::array_new<app::ServerCustomIDPlayFabIDPair__Array>(get_class(), items);
        }
    } // namespace ServerCustomIDPlayFabIDPair
} // namespace app::classes::types
