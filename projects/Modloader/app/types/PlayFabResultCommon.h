#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabResultCommon {
        namespace {
            inline app::PlayFabResultCommon__Class* type_info_ref = nullptr;
        }
        inline app::PlayFabResultCommon__Class** type_info = &type_info_ref;
        inline app::PlayFabResultCommon__Class* get_class() {
            return il2cpp::get_class<app::PlayFabResultCommon__Class>(type_info, "PlayFab.SharedModels", "PlayFabResultCommon");
        }
        inline app::PlayFabResultCommon* create() {
            return il2cpp::create_object<app::PlayFabResultCommon>(get_class());
        }
    } // namespace PlayFabResultCommon
} // namespace app::classes::types
