#pragma once
#include <Modloader/app/structs/PlayFabExceptionCode__Enum.h>
#include <Modloader/app/structs/PlayFabExceptionCode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabExceptionCode__Enum {
        inline app::PlayFabExceptionCode__Enum__Class** type_info() {
            static app::PlayFabExceptionCode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayFabExceptionCode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayFabExceptionCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::PlayFabExceptionCode__Enum__Class>(type_info(), "PlayFab", "PlayFabExceptionCode");
        }
        inline app::PlayFabExceptionCode__Enum* create() {
            return il2cpp::create_object<app::PlayFabExceptionCode__Enum>(get_class());
        }
    } // namespace PlayFabExceptionCode__Enum
} // namespace app::classes::types
