#pragma once
#include <Modloader/app/structs/PlayFabSimpleJson_TokenType__Enum.h>
#include <Modloader/app/structs/PlayFabSimpleJson_TokenType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabSimpleJson_TokenType__Enum {
        inline app::PlayFabSimpleJson_TokenType__Enum__Class** type_info() {
            static app::PlayFabSimpleJson_TokenType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayFabSimpleJson_TokenType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayFabSimpleJson_TokenType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabSimpleJson_TokenType__Enum__Class>(type_info(), "PlayFab.Json", "PlayFabSimpleJson", "TokenType");
        }
        inline app::PlayFabSimpleJson_TokenType__Enum* create() {
            return il2cpp::create_object<app::PlayFabSimpleJson_TokenType__Enum>(get_class());
        }
    } // namespace PlayFabSimpleJson_TokenType__Enum
} // namespace app::classes::types
