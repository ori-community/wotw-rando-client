#pragma once
#include <Modloader/app/structs/ServerCustomIDPlayFabIDPair.h>
#include <Modloader/app/structs/ServerCustomIDPlayFabIDPair__Array.h>
#include <Modloader/app/structs/ServerCustomIDPlayFabIDPair__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerCustomIDPlayFabIDPair {
        inline app::ServerCustomIDPlayFabIDPair__Class** type_info() {
            static app::ServerCustomIDPlayFabIDPair__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerCustomIDPlayFabIDPair__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerCustomIDPlayFabIDPair__Class* get_class() {
            return il2cpp::get_class<app::ServerCustomIDPlayFabIDPair__Class>(type_info(), "PlayFab.ServerModels", "ServerCustomIDPlayFabIDPair");
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
