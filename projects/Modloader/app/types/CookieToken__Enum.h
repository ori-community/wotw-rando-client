#pragma once
#include <Modloader/app/structs/CookieToken__Enum.h>
#include <Modloader/app/structs/CookieToken__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CookieToken__Enum {
        inline app::CookieToken__Enum__Class** type_info() {
            static app::CookieToken__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CookieToken__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CookieToken__Enum__Class* get_class() {
            return il2cpp::get_class<app::CookieToken__Enum__Class>(type_info(), "System.Net", "CookieToken");
        }
        inline app::CookieToken__Enum* create() {
            return il2cpp::create_object<app::CookieToken__Enum>(get_class());
        }
    } // namespace CookieToken__Enum
} // namespace app::classes::types
