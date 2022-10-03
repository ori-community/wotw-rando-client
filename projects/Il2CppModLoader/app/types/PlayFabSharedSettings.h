#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabSharedSettings {
        namespace {
            app::PlayFabSharedSettings__Class* type_info_ref = nullptr;
        }
        app::PlayFabSharedSettings__Class** type_info = &type_info_ref;
        inline app::PlayFabSharedSettings__Class* get_class() {
            return il2cpp::get_class<app::PlayFabSharedSettings__Class>(type_info, "", "PlayFabSharedSettings");
        }
        inline app::PlayFabSharedSettings* create() {
            return il2cpp::create_object<app::PlayFabSharedSettings>(get_class());
        }
        inline app::PlayFabSharedSettings__Array* create_array(int size) {
            return il2cpp::array_new<app::PlayFabSharedSettings__Array>(get_class(), size);
        }
    } // namespace PlayFabSharedSettings
} // namespace app::classes::types
