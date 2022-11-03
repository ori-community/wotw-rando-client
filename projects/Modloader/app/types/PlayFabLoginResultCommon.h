#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabLoginResultCommon {
        namespace {
            inline app::PlayFabLoginResultCommon__Class* type_info_ref = nullptr;
        }
        inline app::PlayFabLoginResultCommon__Class** type_info = &type_info_ref;
        inline app::PlayFabLoginResultCommon__Class* get_class() {
            return il2cpp::get_class<app::PlayFabLoginResultCommon__Class>(type_info, "PlayFab.SharedModels", "PlayFabLoginResultCommon");
        }
        inline app::PlayFabLoginResultCommon* create() {
            return il2cpp::create_object<app::PlayFabLoginResultCommon>(get_class());
        }
    } // namespace PlayFabLoginResultCommon
} // namespace app::classes::types
