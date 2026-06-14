#pragma once
#include <Modloader/app/structs/KongregatePlayFabIdPair__Array.h>
#include <Modloader/app/structs/KongregatePlayFabIdPair__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KongregatePlayFabIdPair__Array {
        inline app::KongregatePlayFabIdPair__Array__Class** type_info() {
            static app::KongregatePlayFabIdPair__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KongregatePlayFabIdPair__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KongregatePlayFabIdPair__Array__Class* get_class() {
            return il2cpp::get_class<app::KongregatePlayFabIdPair__Array__Class>(type_info(), "PlayFab.ClientModels", "KongregatePlayFabIdPair[]");
        }
        inline app::KongregatePlayFabIdPair__Array* create() {
            return il2cpp::create_object<app::KongregatePlayFabIdPair__Array>(get_class());
        }
    } // namespace KongregatePlayFabIdPair__Array
} // namespace app::classes::types
