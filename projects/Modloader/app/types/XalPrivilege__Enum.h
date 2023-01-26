#pragma once
#include <Modloader/app/structs/XalPrivilege__Enum.h>
#include <Modloader/app/structs/XalPrivilege__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalPrivilege__Enum {
        inline app::XalPrivilege__Enum__Class** type_info() {
            static app::XalPrivilege__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XalPrivilege__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XalPrivilege__Enum__Class* get_class() {
            return il2cpp::get_class<app::XalPrivilege__Enum__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "XalPrivilege");
        }
        inline app::XalPrivilege__Enum* create() {
            return il2cpp::create_object<app::XalPrivilege__Enum>(get_class());
        }
    } // namespace XalPrivilege__Enum
} // namespace app::classes::types
