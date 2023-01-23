#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayFabLocalizationInstanceAPI__Class.h>
#include <Modloader/app/structs/PlayFabLocalizationInstanceAPI.h>

namespace app::classes::types {
    namespace PlayFabLocalizationInstanceAPI {
        namespace {
            inline app::PlayFabLocalizationInstanceAPI__Class* type_info_ref = nullptr;
        }
        inline app::PlayFabLocalizationInstanceAPI__Class** type_info = &type_info_ref;
        inline app::PlayFabLocalizationInstanceAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabLocalizationInstanceAPI__Class>(type_info, "PlayFab", "PlayFabLocalizationInstanceAPI");
        }
        inline app::PlayFabLocalizationInstanceAPI* create() {
            return il2cpp::create_object<app::PlayFabLocalizationInstanceAPI>(get_class());
        }
    } // namespace PlayFabLocalizationInstanceAPI
} // namespace app::classes::types
