#pragma once
#include <Modloader/app/structs/AuthenticationProvider__Enum.h>
#include <Modloader/app/structs/AuthenticationProvider__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AuthenticationProvider__Enum {
        inline app::AuthenticationProvider__Enum__Class** type_info() {
            static app::AuthenticationProvider__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AuthenticationProvider__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AuthenticationProvider__Enum__Class* get_class() {
            return il2cpp::get_class<app::AuthenticationProvider__Enum__Class>(type_info(), "PlayFab.PlayStreamModels", "AuthenticationProvider");
        }
        inline app::AuthenticationProvider__Enum* create() {
            return il2cpp::create_object<app::AuthenticationProvider__Enum>(get_class());
        }
    } // namespace AuthenticationProvider__Enum
} // namespace app::classes::types
