#pragma once
#include <Modloader/app/structs/KongregatePlayFabIdPair.h>
#include <Modloader/app/structs/KongregatePlayFabIdPair__Array.h>
#include <Modloader/app/structs/KongregatePlayFabIdPair__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KongregatePlayFabIdPair {
        inline app::KongregatePlayFabIdPair__Class** type_info() {
            static app::KongregatePlayFabIdPair__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KongregatePlayFabIdPair__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KongregatePlayFabIdPair__Class* get_class() {
            return il2cpp::get_class<app::KongregatePlayFabIdPair__Class>(type_info(), "PlayFab.ClientModels", "KongregatePlayFabIdPair");
        }
        inline app::KongregatePlayFabIdPair* create() {
            return il2cpp::create_object<app::KongregatePlayFabIdPair>(get_class());
        }
        inline app::KongregatePlayFabIdPair__Array* create_array(int size) {
            return il2cpp::array_new<app::KongregatePlayFabIdPair__Array>(get_class(), size);
        }
        inline app::KongregatePlayFabIdPair__Array* create_array(const std::vector<app::KongregatePlayFabIdPair*>& items) {
            return il2cpp::array_new<app::KongregatePlayFabIdPair__Array>(get_class(), items);
        }
    } // namespace KongregatePlayFabIdPair
} // namespace app::classes::types
