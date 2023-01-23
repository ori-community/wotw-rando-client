#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AuthType__Enum__Class.h>
#include <Modloader/app/structs/AuthType__Enum.h>

namespace app::classes::types {
    namespace AuthType__Enum {
        namespace {
            inline app::AuthType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AuthType__Enum__Class** type_info = &type_info_ref;
        inline app::AuthType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AuthType__Enum__Class>(type_info, "PlayFab.Internal", "AuthType");
        }
        inline app::AuthType__Enum* create() {
            return il2cpp::create_object<app::AuthType__Enum>(get_class());
        }
    } // namespace AuthType__Enum
} // namespace app::classes::types
