#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GooglePlayFabIdPair {
        namespace {
            inline app::GooglePlayFabIdPair__Class* type_info_ref = nullptr;
        }
        inline app::GooglePlayFabIdPair__Class** type_info = &type_info_ref;
        inline app::GooglePlayFabIdPair__Class* get_class() {
            return il2cpp::get_class<app::GooglePlayFabIdPair__Class>(type_info, "PlayFab.ClientModels", "GooglePlayFabIdPair");
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
