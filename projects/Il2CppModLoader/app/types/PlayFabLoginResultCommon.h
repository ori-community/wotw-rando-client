#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabLoginResultCommon {
        namespace {
            app::PlayFabLoginResultCommon__Class* type_info_ref = nullptr;
        }
        app::PlayFabLoginResultCommon__Class** type_info = &type_info_ref;
        inline app::PlayFabLoginResultCommon__Class* get_class() {
            return il2cpp::get_class<app::PlayFabLoginResultCommon__Class>(type_info, "PlayFab.SharedModels", "PlayFabLoginResultCommon");
        }
        inline app::PlayFabLoginResultCommon* create() {
            return il2cpp::create_object<app::PlayFabLoginResultCommon>(get_class());
        }
    } // namespace PlayFabLoginResultCommon
} // namespace app::classes::types
