#pragma once
#include <Modloader/app/structs/GooglePlayFabIdPair__Array.h>
#include <Modloader/app/structs/GooglePlayFabIdPair__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GooglePlayFabIdPair__Array {
        inline app::GooglePlayFabIdPair__Array__Class** type_info() {
            static app::GooglePlayFabIdPair__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GooglePlayFabIdPair__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GooglePlayFabIdPair__Array__Class* get_class() {
            return il2cpp::get_class<app::GooglePlayFabIdPair__Array__Class>(type_info(), "PlayFab.ClientModels", "GooglePlayFabIdPair[]");
        }
        inline app::GooglePlayFabIdPair__Array* create() {
            return il2cpp::create_object<app::GooglePlayFabIdPair__Array>(get_class());
        }
    } // namespace GooglePlayFabIdPair__Array
} // namespace app::classes::types
