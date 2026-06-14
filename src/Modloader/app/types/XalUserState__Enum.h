#pragma once
#include <Modloader/app/structs/XalUserState__Enum.h>
#include <Modloader/app/structs/XalUserState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalUserState__Enum {
        inline app::XalUserState__Enum__Class** type_info() {
            static app::XalUserState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XalUserState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XalUserState__Enum__Class* get_class() {
            return il2cpp::get_class<app::XalUserState__Enum__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "XalUserState");
        }
        inline app::XalUserState__Enum* create() {
            return il2cpp::create_object<app::XalUserState__Enum>(get_class());
        }
    } // namespace XalUserState__Enum
} // namespace app::classes::types
