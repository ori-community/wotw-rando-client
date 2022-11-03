#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabServerInstanceAPI {
        namespace {
            inline app::PlayFabServerInstanceAPI__Class* type_info_ref = nullptr;
        }
        inline app::PlayFabServerInstanceAPI__Class** type_info = &type_info_ref;
        inline app::PlayFabServerInstanceAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabServerInstanceAPI__Class>(type_info, "PlayFab", "PlayFabServerInstanceAPI");
        }
        inline app::PlayFabServerInstanceAPI* create() {
            return il2cpp::create_object<app::PlayFabServerInstanceAPI>(get_class());
        }
    } // namespace PlayFabServerInstanceAPI
} // namespace app::classes::types
