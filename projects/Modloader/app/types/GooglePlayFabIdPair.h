#pragma once
#include <Modloader/app/structs/GooglePlayFabIdPair.h>
#include <Modloader/app/structs/GooglePlayFabIdPair__Array.h>
#include <Modloader/app/structs/GooglePlayFabIdPair__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GooglePlayFabIdPair {
        inline app::GooglePlayFabIdPair__Class** type_info() {
            static app::GooglePlayFabIdPair__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GooglePlayFabIdPair__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GooglePlayFabIdPair__Class* get_class() {
            return il2cpp::get_class<app::GooglePlayFabIdPair__Class>(type_info(), "PlayFab.ClientModels", "GooglePlayFabIdPair");
        }
        inline app::GooglePlayFabIdPair* create() {
            return il2cpp::create_object<app::GooglePlayFabIdPair>(get_class());
        }
        inline app::GooglePlayFabIdPair__Array* create_array(int size) {
            return il2cpp::array_new<app::GooglePlayFabIdPair__Array>(get_class(), size);
        }
        inline app::GooglePlayFabIdPair__Array* create_array(const std::vector<app::GooglePlayFabIdPair*>& items) {
            return il2cpp::array_new<app::GooglePlayFabIdPair__Array>(get_class(), items);
        }
    } // namespace GooglePlayFabIdPair
} // namespace app::classes::types
