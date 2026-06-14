#pragma once
#include <Modloader/app/structs/PlayFabResultCommon.h>
#include <Modloader/app/structs/PlayFabResultCommon__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabResultCommon {
        inline app::PlayFabResultCommon__Class** type_info() {
            static app::PlayFabResultCommon__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayFabResultCommon__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayFabResultCommon__Class* get_class() {
            return il2cpp::get_class<app::PlayFabResultCommon__Class>(type_info(), "PlayFab.SharedModels", "PlayFabResultCommon");
        }
        inline app::PlayFabResultCommon* create() {
            return il2cpp::create_object<app::PlayFabResultCommon>(get_class());
        }
    } // namespace PlayFabResultCommon
} // namespace app::classes::types
