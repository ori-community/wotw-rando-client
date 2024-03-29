#pragma once
#include <Modloader/app/structs/AuthType__Enum.h>
#include <Modloader/app/structs/AuthType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AuthType__Enum {
        inline app::AuthType__Enum__Class** type_info() {
            static app::AuthType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AuthType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AuthType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AuthType__Enum__Class>(type_info(), "PlayFab.Internal", "AuthType");
        }
        inline app::AuthType__Enum* create() {
            return il2cpp::create_object<app::AuthType__Enum>(get_class());
        }
    } // namespace AuthType__Enum
} // namespace app::classes::types
