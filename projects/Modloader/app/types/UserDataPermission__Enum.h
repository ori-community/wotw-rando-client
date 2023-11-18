#pragma once
#include <Modloader/app/structs/UserDataPermission__Enum.h>
#include <Modloader/app/structs/UserDataPermission__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserDataPermission__Enum {
        inline app::UserDataPermission__Enum__Class** type_info() {
            static app::UserDataPermission__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UserDataPermission__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477CEF8));
            }
            return cache;
        }
        inline app::UserDataPermission__Enum__Class* get_class() {
            return il2cpp::get_class<app::UserDataPermission__Enum__Class>(type_info(), "PlayFab.ClientModels", "UserDataPermission");
        }
        inline app::UserDataPermission__Enum* create() {
            return il2cpp::create_object<app::UserDataPermission__Enum>(get_class());
        }
    } // namespace UserDataPermission__Enum
} // namespace app::classes::types
