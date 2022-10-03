#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KongregatePlayFabIdPair {
        namespace {
            app::KongregatePlayFabIdPair__Class* type_info_ref = nullptr;
        }
        app::KongregatePlayFabIdPair__Class** type_info = &type_info_ref;
        inline app::KongregatePlayFabIdPair__Class* get_class() {
            return il2cpp::get_class<app::KongregatePlayFabIdPair__Class>(type_info, "PlayFab.ClientModels", "KongregatePlayFabIdPair");
        }
        inline app::KongregatePlayFabIdPair* create() {
            return il2cpp::create_object<app::KongregatePlayFabIdPair>(get_class());
        }
        inline app::KongregatePlayFabIdPair__Array* create_array(int size) {
            return il2cpp::array_new<app::KongregatePlayFabIdPair__Array>(get_class(), size);
        }
    } // namespace KongregatePlayFabIdPair
} // namespace app::classes::types
