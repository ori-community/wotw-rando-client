#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabEmitEventCallback {
        namespace {
            inline app::PlayFabEmitEventCallback__Class* type_info_ref = nullptr;
        }
        inline app::PlayFabEmitEventCallback__Class** type_info = &type_info_ref;
        inline app::PlayFabEmitEventCallback__Class* get_class() {
            return il2cpp::get_class<app::PlayFabEmitEventCallback__Class>(type_info, "PlayFab", "PlayFabEmitEventCallback");
        }
        inline app::PlayFabEmitEventCallback* create() {
            return il2cpp::create_object<app::PlayFabEmitEventCallback>(get_class());
        }
    } // namespace PlayFabEmitEventCallback
} // namespace app::classes::types
