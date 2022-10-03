#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GooglePlayFabIdPair__Array {
        namespace {
            app::GooglePlayFabIdPair__Array__Class* type_info_ref = nullptr;
        }
        app::GooglePlayFabIdPair__Array__Class** type_info = &type_info_ref;
        inline app::GooglePlayFabIdPair__Array__Class* get_class() {
            return il2cpp::get_class<app::GooglePlayFabIdPair__Array__Class>(type_info, "PlayFab.ClientModels", "GooglePlayFabIdPair[]");
        }
        inline app::GooglePlayFabIdPair__Array* create() {
            return il2cpp::create_object<app::GooglePlayFabIdPair__Array>(get_class());
        }
    } // namespace GooglePlayFabIdPair__Array
} // namespace app::classes::types
