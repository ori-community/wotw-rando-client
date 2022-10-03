#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabExceptionCode__Enum {
        namespace {
            app::PlayFabExceptionCode__Enum__Class* type_info_ref = nullptr;
        }
        app::PlayFabExceptionCode__Enum__Class** type_info = &type_info_ref;
        inline app::PlayFabExceptionCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::PlayFabExceptionCode__Enum__Class>(type_info, "PlayFab", "PlayFabExceptionCode");
        }
        inline app::PlayFabExceptionCode__Enum* create() {
            return il2cpp::create_object<app::PlayFabExceptionCode__Enum>(get_class());
        }
    } // namespace PlayFabExceptionCode__Enum
} // namespace app::classes::types
